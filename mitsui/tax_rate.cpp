#include <iostream>
using namespace std;

int main(){
    double n;cin>>n;
    double original = n / 1.08;

    bool judge = false;
    int val;
    for (int i=-10;i<11;i++){
        if ((int)(((int)original + i) * 1.08) == n){
            val = (int)original + i;
            judge = true;
            break;
        }
    }
    if (judge){
        cout << val <<endl;
    } else {
        cout << ":(" <<endl;
    }
    return 0;

}