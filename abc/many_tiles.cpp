#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int minimum;
    int quotient, remainder, cost;
    for (int i=1;i<n/2+1;i++){
        quotient = n / i;
        remainder = n % i;
        cost = abs(quotient - i) + remainder;
        if (i == 1){
            minimum = cost;
        } else if (cost < minimum){
            minimum = cost;
        }
    }
    cout << minimum << endl;
    return 0;
}