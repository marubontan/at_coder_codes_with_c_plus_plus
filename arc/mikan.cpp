#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    long long a, b, k, l;
    cin >> a >> b >> k >> l;
    if (a < b / (double)(l)) {
        cout << a * k << endl;
    } else {
        if (k % l == 0){
            cout << b * (k / l) << endl;
        } else {
            cout << min(a * (k % l) + b * (k / l), b * (k / l + 1)) << endl;
        }
    }
    return 0;
}
