#include <iostream>
using namespace std;

int main(){
    long long a, b, c, k;cin>>a>>b>>c>>k;
    long long border = 1000000000000000000;
    long long value;
    if (k % 2 == 0){
        value = a - b;
    } else {
        value = b - a;
    }
    if (abs(value) > border){
        cout << "Unfair" << endl;
    } else {
        cout << value << endl;
    }
    return 0;
}