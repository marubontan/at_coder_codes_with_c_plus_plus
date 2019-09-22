#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;cin>>n;
    vector<long long> a(n);
    vector<long long> b(n);
    for (int i=0;i<n;i++){
        cin >> a[i] >> b[i];
    }
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    long long acc = 0;
    for (int i=0;i<n;i++){
        auto b_i = b[i];
        auto remain = (a[i] + acc) % b[i];
        if (remain != 0){
            acc += b_i - remain;
        }
    }
    cout << acc << endl;
    return 0;
    
}