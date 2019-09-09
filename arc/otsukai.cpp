#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n; cin >> n;
    int a, b;
    int acc = 0;
    for (int i=0;i<n;i++){
        cin >> a >> b;
        acc += a * b;
    }
    cout << floor(acc * 1.05) << endl;
    return 0;
}