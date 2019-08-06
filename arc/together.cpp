#include <iostream>
#include <bits/stdc++.h>
#include <map>
#include <vector>
using namespace std;

bool compare(const pair<int, int>&a, const pair<int, int>&b)
{
   return a.second<b.second;
}

int main(){
    int n;
    cin >> n;
    vector<int> data(n);
    for (int i=0;i<n;i++){
        cin >> data[i];
    }
    vector<int> total_data(3*n);
    for (int i=0;i<n;i++){
        total_data[3 * i] = data[i];
        total_data[3 * i + 1] = data[i] - 1;
        total_data[3 * i + 2] = data[i] + 1;
    }
    map<int, int> counter;
    for (auto &i : total_data){
        ++counter[i];
    }
    auto maxn = max_element(counter.begin(), counter.end(), compare)->second;
    cout<<maxn<<endl;
    return 0;
}