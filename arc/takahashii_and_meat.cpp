#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> meats(n);
    for (int i=0;i<n;i++){
        cin >> meats[i];
    }
    if (n == 1){
        cout << meats[0] << endl;
    } else if (n == 2){
        cout << *max_element(meats.begin(), meats.end()) << endl;
    } else if (n == 3){
        sort(meats.begin(), meats.end());
        if (meats[2] > meats[0] + meats[1]){
            cout << meats[2] << endl;
        } else {
            cout << meats[0] + meats[1] << endl;
        }
    } else {
        sort(meats.begin(), meats.end());
        if (meats[3] > meats[0] + meats[1] + meats[2]){
            cout << meats[3] << endl;
        } else {
            cout << min(meats[0] + meats[1] + meats[2], max(meats[0] + meats[3], meats[1] + meats[2])) << endl;
        }
    }
}