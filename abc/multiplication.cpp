#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    long long a;
    double b;
    cin >> a;
    cin >> b;
    long long b_long = (b * 100 + 0.001);
    cout << setprecision(0) << a * b_long / 100 << endl;
}