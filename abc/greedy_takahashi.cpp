#include <iostream>
using namespace std;

int main(){
    long long a,b,k;cin>>a>>b>>k;

    if (a < k){
        if (k - a < b){
            cout << 0 << " " << b - (k - a) <<endl;
        } else {
            cout << 0 << " " << 0 << endl;
        }
    } else {
        cout << a - k << " " << b <<endl;
    }
    return 0;
}