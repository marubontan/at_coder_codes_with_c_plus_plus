#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
    int n;cin>>n;
    vector<long long> pressure(n);for (int i=0;i<n;i++){cin>>pressure[i];}
    vector<long long> pressure_copied = pressure; 

    sort(pressure.begin(), pressure.end());
    pressure.erase(unique(pressure.begin(), pressure.end()), pressure.end());

    map<long long, int> mapper;
    for (int i=0;i<pressure.size();i++){
        mapper[pressure[i]] = i;
    }
    for (auto k: pressure_copied){
        cout << mapper[k] << endl;
    }
    return 0;
}