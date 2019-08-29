#include <iostream>
using namespace std;

int main(){
    long long a, b, n;
    cin >> a >> b >> n;
    if (a % n == 0){
        cout << (b/n) - (a/n) + 1 <<endl;
    } else {
        cout << (b/n) - (a/n) << endl;
    }
}