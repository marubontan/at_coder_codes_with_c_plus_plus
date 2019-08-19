#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> scores(n);
    for (int i=0;i<n;i++){
        cin >> scores[i];
    }
    int acc = 0;
    for (auto &s : scores){
        if (s < 80){
            acc += 80 - s;
        }
    }
    cout << acc << endl;
    return 0;
    
}