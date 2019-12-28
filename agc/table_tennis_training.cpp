#include <iostream>
using namespace std;

int main(){
    long long n,a,b;cin>>n>>a>>b;
    if ((b - a) % 2 == 0){
        cout << (b - a) / 2 << endl;
    } else {
        long long val_1;
        long long delta_a = a - 1 + 1;
        if (delta_a == b - 1){
            val_1 = delta_a;
        } else {
            val_1 = delta_a + ((b - a - 1) / 2);
        }
        long long val_2;
        long long delta_b = n - b + 1;
        if (delta_b == n - a){
            val_2 = delta_b;
        } else {
            val_2 = delta_b + ((b - a - 1) / 2);
        }

        cout << min(val_1, val_2) << endl;
    }
    return 0;
}