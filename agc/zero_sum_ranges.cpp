#include <iostream>
#include <map>
#include <vector>
using namespace std;

map<long long, long long> counter(vector<long long> nums){
    map<long long, long long> freq;
    for (auto i : nums) freq[i]++;
    return freq;
}

int main(){
    int n;cin>>n;
    vector<long long> numbers(n);for (int i=0;i<n;i++){cin >> numbers[i];}
    vector<long long> acc(n+1);
    acc[0] = 0;
    for (int i=0;i<n;i++) acc[i+1] = acc[i] + numbers[i];

    auto freq = counter(acc);

    long long patterns = 0;
    for (auto item: freq){
        if (item.second >= 2){
            patterns += item.second * (item.second - 1) / 2;
        } 
    }
    cout << patterns << endl;
    return 0;

}