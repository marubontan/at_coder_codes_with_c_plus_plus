#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    cout << (1900 * m + 100 * (n - m)) * pow(2, m) << endl;
    return 0;
}