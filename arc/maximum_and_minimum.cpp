#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long n;cin>>n;
    vector<long long> dist(n);for(long long i=0;i<n;i++){cin>>dist[i];}

    sort(dist.begin(), dist.end(), greater<int>());

    long long acc_max = 0;
    long long acc_min = 0;
    if (n == 1){
        cout << dist[0] << endl;
        cout << dist[0] << endl;
        return 0;
    }
    for (long long i=0;i<n;i++){
        acc_max += dist[i];
        if (i!=0){
            acc_min += dist[i];
        }
    }
    cout << acc_max << endl;
    if (dist[0] <= acc_min){
        cout << 0 << endl;
    } else {
        cout << dist[0] - acc_min << endl;

    }
    return 0;
}