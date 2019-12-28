#include <iostream>
using namespace std;

int main(){
    long long k,a,b;cin>>k>>a>>b;

    if (k <= a){
        cout << k + 1 << endl;
        return 0;
    }
    long long delta = b - a;

    long long acc = 0;
    if (delta > 2){
        k -= a - 1;
        acc += a;
        if (k % 2 == 0){
            acc += delta * (k / 2);
        } else {
            acc++;
            k--;
            if (k != 0){
                acc += delta * (k / 2);
            }
        }
    } else {
        acc += k + 1;
    }
    cout << acc << endl;
    return 0;
}