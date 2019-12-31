#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long n;cin>>n;
    vector<long long> positions(n + 2);
    positions[0] = 0;
    for (long long i=1;i<=n;i++){
        cin >> positions[i];
    }

    long long acc = 0;
    positions[n+1] = 0;
    for (long long i=0;i<=n;i++){
        acc += abs(positions[i+1] - positions[i]);
    }

    for (long long i=1;i<=n;i++){
        cout << acc - (abs(positions[i] - positions[i-1]) + abs(positions[i+1] - positions[i])) + abs(positions[i+1] - positions[i-1]) << endl;
    }
    return 0;
}