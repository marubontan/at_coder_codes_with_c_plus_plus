#include <iostream>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;
    if (a <= -1 && b >= 1){
        cout << b - a -1 << endl;
    } else {
        cout << b - a << endl;
    }
    return 0;
}