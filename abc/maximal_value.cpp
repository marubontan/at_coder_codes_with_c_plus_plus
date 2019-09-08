#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin >>n;
    vector<int>bs(n+1);for(int i=0;i<n-1;i++){cin>>bs[i];}
    bs[n-1]=100000;
    long long acc = bs[0];
    for (int i=0;i<n-1;i++){
        acc += min(bs[i], bs[i+1]);
    }
    cout << acc << endl;
    return 0;
}