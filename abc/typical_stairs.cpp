#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long n,m;cin>>n>>m;
    vector<long long> broken(m);for (int i=0;i<m;i++){cin>>broken[i];}
    if (m >= 2){
        for (int i=1;i<m;i++){
            if (broken[i] == broken[i-1] + 1){
                cout << 0 << endl;
                return 0;
            }
        }
    }
    vector<long long> patterns(n+1);
    if (n==1){
        cout << 1 << endl;
        return 0;
    }

    patterns[0] = 1;
    if (find(broken.begin(), broken.end(), 1) == broken.end()){
        patterns[1] = 1;
    } else {
        patterns[1] = 0;
    }
    for (long long i=2;i<=n;i++){
        if (find(broken.begin(), broken.end(), i) == broken.end()){
            patterns[i] = ((patterns[i-2] % 1000000007) + (patterns[i-1] % 1000000007)) % 1000000007;
        } else {
            patterns[i] = 0;
        }
    }
    cout << patterns[n] << endl;
    return 0;

}