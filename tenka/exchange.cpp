#include <iostream>
using namespace std;

int main(){
    long long a, b, k;cin>>a>>b>>k;
    for (int i=0;i<k;i++){
        if (i % 2 == 0){
            if (a % 2 == 1){
                a -= 1;
            }
            a /= 2;
            b += a;
        } else {
            if (b % 2 == 1){
                b -= 1;
            }
            b /= 2;
            a += b;

        }
    }
    cout << a << " " << b <<endl;
    return 0;
}