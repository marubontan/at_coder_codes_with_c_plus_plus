#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> b(n);
    vector<long long> c(n);
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    for (int i=0;i<n;i++){
        cin >> b[i];
    }
    for (int i=0;i<n;i++){
        cin >> c[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    long long acc = 0;
    for (auto &b_i : b){
        acc += (lower_bound(a.begin(), a.end(), b_i) - a.begin()) * (c.end() - upper_bound(c.begin(), c.end(), b_i));
    }

    cout << acc << endl;
    return 0;
}