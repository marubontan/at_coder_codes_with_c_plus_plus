#include <iostream>
using namespace std;

int main(){
    int n,k;cin >> n >> k;
    if (k == 1){
        cout << 0 << endl;
        return 0;
    }
    cout << n - k <<endl;
    return 0;
}