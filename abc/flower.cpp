#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int temp;
    int acc = 0;
    for (int i=0;i<n;i++){
        cin >> temp;
        if (temp % 6 == 0){
            acc += 3;
        } else if (temp % 3 == 2){
            acc += 1;
            if ((temp - 1) % 2 == 0){
                acc += 1;
            }
        } else if (temp % 2 == 0){
            acc += 1;
            if ((temp - 1) % 3 == 2){
                acc += 1;
            }
        }
    }
    cout << acc << endl;
    return 0;
}