#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    if (n == 1){
        cout << "BOWWOW" << endl;
        return 0;
    }
    int acc;
    for (int i=1;i<=n;i++){
        acc += i;
    }

    string flag = "WANWAN";
    for (int i=2;i<n;i++){
        if (acc % i == 0){
            flag = "BOWWOW";
        }
    }
    cout << flag << endl;
    return 0;
}