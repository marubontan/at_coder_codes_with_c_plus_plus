#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;cin>>n;
    if (n%2==0){
        cout << 0.5 << endl;
    } else {
        cout << setprecision(10) << ((n / 2) + 1) / (float)(n) << endl;
    }
    return 0;
}