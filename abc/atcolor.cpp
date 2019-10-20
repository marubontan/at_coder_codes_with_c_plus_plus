#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<long long> cumsum(vector<long long> colors){
    vector<long long> o;
    long long acc=0;
    for (auto v : colors){
        o.push_back(acc+=v);
    }
    return o;
}

int main(){
    int n;cin>>n;
    vector<long long> colors(1000001, 0);
    for (int i=0;i<n;i++){
        long long l,r;cin>>l>>r;
        colors[l]++;
        colors[r+1]--;
    }

    auto cumsummed = cumsum(colors);
    cout << *max_element(cumsummed.begin(), cumsummed.end()) << endl;
    return 0;
}
