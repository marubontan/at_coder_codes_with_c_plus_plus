#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n;
    cin >> k;
    if (n / 2 >= k){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}