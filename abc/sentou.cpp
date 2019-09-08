#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long n, t; cin >> n >> t;
    vector<long long> times(n+1); for (long long i=0;i<n;i++){cin >> times[i];}
    times[n] = times[n-1] + t;
    long long acc = 0;
    for (long long i=1;i<n+1;i++){
        if ((times[i] - times[i-1]) > t){
            acc += t;
        } else {
            acc += times[i] - times[i-1];
        }
    }
    cout << acc << endl;
    return 0;
}