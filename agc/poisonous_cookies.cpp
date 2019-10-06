#include <iostream>
using namespace std;

int main(){
    long long a, b, c;cin>>a>>b>>c;
    if (a + b < c){
        cout << b + (a + b + 1) << endl;
    } else {
        cout << b + c << endl;
    }
    return 0;
}