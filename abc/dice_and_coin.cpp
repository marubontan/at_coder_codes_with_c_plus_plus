#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    long double acc=0.0;
    for (int i=1;i<=n;i++){
        long double front_num=0.0;
        if (i >= k){
            acc += 1.0;
        } else {
            long double val = i;
            while (true){
                val *= 2.0;
                front_num++;
                if (val >= k){
                    break;
                }
            }
            acc += pow(1.0/2.0, front_num);
        }
    }
    cout << setprecision(15) << (1.0 / (long double)(n)) * acc << endl;
}