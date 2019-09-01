#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    unsigned long long n; cin >> n;
    if (n == 1){
        cout << 0 << endl;
    } else {
        cout << setprecision(100000) << (n * (n - 1)) / 2 << endl;
    }
    return 0;
}