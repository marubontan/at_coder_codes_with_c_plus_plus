#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string s; cin >> s;
    long long k; cin >> k;
    bool all_one = true;
    int val;

    for (int i=0;i<k;i++){
        auto c = s[i];
        if (c != '1'){
            all_one = false;
            val = c - '0';
            break;
        }
    }
    if (all_one){
        cout << 1 << endl;
    } else {
        cout << val << endl;
    }

    return 0;
}
