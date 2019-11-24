#include <iostream>
#include <math.h>
using namespace std;

int count(long long number){
    int acc = 1;
    while (number >= 10){
        number /= 10;
        acc++;
    }
    return acc;
}

int main(){
    long long a, b, x;cin>>a>>b>>x;
    long long start_point;
    if (x / b <= 9){
        start_point = min((long long)(pow(10.0, 9.0)), min((x / a) + 1, (long long)(pow(10.0, (x / b) + 1))));
    } else {
        start_point = min((long long)(pow(10.0, 9.0)), (x / a) + 1);
    }

    long long latest_digits = count(start_point);
    for (long long i=start_point;i>=0;i--){
        if ((a * i + b * latest_digits) <= x){
            cout << i << endl;
            return 0;

        }
        if (i % 10 == 0){
            latest_digits = count(i - 1);
        }
    }
    cout << 0 << endl;
    return 0;

}