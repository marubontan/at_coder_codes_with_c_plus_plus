#include <algorithm>
#include <iostream>
#include <vector>
using namespace  std;

int main(){
    long long n,a,b,c,d,e;
    cin >> n;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    vector<long long> capacities{a, b, c, d, e};
    sort(capacities.begin(), capacities.end());
    if (n % capacities[0] == 0){
        cout << 4 + n/capacities[0] << endl;
    } else {
        cout << 4 + n/capacities[0] + 1 << endl;
    }
    return 0;
}