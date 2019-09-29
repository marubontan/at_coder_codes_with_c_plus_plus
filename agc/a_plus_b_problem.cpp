#include <iostream>
using namespace std;

int main(){
    long long n, a, b; cin >> n >> a >> b;

    if (a > b){
        cout << 0 << endl;
    } else if (a == b){
        cout << 1 << endl;
    } else if (n == 1 && a != b){
        cout << 0 << endl;
    } else {
        cout << ((n - 1) * b + a) - ((n - 1) * a + b) + 1 << endl;
    }
    return 0;
}