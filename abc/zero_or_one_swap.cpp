#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int acc = 0;
    int temp;
    for (int i=0;i<n;i++){
        cin >> temp;
        if (temp != i+1){
            acc++;
        }
    }
    if (acc <= 2){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}