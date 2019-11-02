#include <iostream>
#include <math.h>
using namespace std;

int main(){
    long long n;cin>>n;
    long long min = 100000000000000;
    long long temp;
    for (long long i=1;i<=sqrt(n);i++){
        if (n % i == 0){
            temp = (i - 1) + ((n / i) - 1);
            if (min >= temp){
                min = temp;
            }
        }
    }
    cout << min << endl;
    return 0;
}
