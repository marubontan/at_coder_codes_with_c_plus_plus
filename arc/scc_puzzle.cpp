#include <iostream>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;
    if (2 * n >= m){
        cout << m / 2 << endl;
    } else {
        cout << ((m - 2 * n) / 4) + n << endl;
    }
    return 0;
}