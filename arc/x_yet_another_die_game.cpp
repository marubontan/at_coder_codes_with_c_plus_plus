#include <iostream>
using namespace std;

int main(){
    long long n;cin>>n;
    long long set_val = 2 * (n / 11);
    if (n % 11 == 0){
        cout << set_val << endl;
    } else if (n % 11 <= 6){
        cout << set_val + 1 << endl;
    } else {
        cout << set_val + 2 << endl;
    }
    return 0;
}