#include <iostream>
using namespace std;

int main(){
    int m, n, N;
    cin >> m >> n >> N;

    long long acc = N;
    long long latest = N;
    long long temp;
    while (1){
        if (latest < m){
            break;
        }
        temp = (latest / m) * n;
        latest = temp + latest % m;
        acc += temp;
    }
    cout << acc << endl;
    return 0;
}
