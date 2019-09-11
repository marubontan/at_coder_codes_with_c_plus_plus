#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string s; cin >> s;
    long long k; cin >> k;

    if (s[0] == '1'){
        if (k == 1){
            cout << 1 << endl;
        } else {
            cout << s[1] << endl;
        }
    } else {
        cout << s[0] << endl;
    }
    return 0;
}
