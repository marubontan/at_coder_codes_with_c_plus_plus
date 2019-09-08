#include <iostream>
using namespace std;

int main(){
    long long l, r; cin >> l >> r;
    if (l <= 2019 && 2019 <= r){
        cout << 0 << endl;
    } else {
        cout << (l % 2019) * ((l % 2019) + 1) << endl;
    }
}