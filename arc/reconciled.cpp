#include <algorithm>
#include <iostream>
using namespace std;
long long DIVISOR = 1000000007;

long long own_product(int n){
    long long acc = 1;
    for (long long i=1;i<n+1;i++){
        acc = acc % DIVISOR;
        acc *= i;
    }
    return acc % DIVISOR;
}

int main(){
    int n, m;
    cin >> n >> m;
    int bigger, smaller;
    if (n >= m){
        bigger = n;
        smaller = m;
    } else {
        bigger = m;
        smaller = n;
    }
    if (bigger - smaller >= 2){
        cout << 0 << endl;
    } else if (bigger - smaller == 1) {
        cout << (own_product(bigger) * own_product(smaller)) % DIVISOR << endl;
    } else {
        cout << 2 *(own_product(bigger) * own_product(smaller)) % DIVISOR << endl;
    }
    return 0;
    
}