#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;cin>>n>>m;
    vector<int> points(m); for (int i=0;i<m;i++){cin>>points[i];}
    sort(points.begin(), points.end());
    if (n >= m){
        cout << 0 << endl;
        return 0;
    }

    vector<int> diff;
    for (int i=1;i<m;i++){
        diff.push_back(points[i] - points[i-1]);
    }
    sort(diff.rbegin(), diff.rend());

    long long acc=0;
    for (int i=0;i<n-1;i++){
        acc += diff[i];
    }
    cout << (points.back() - points[0]) - acc <<endl;
    return 0;

}