#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;cin>>n;
    vector<long long> nums(n); for(int i=0;i<n;i++){cin>>nums[i];}
    vector<long long> odds;
    for (auto i : nums){
        if (i % 2 == 1){
            odds.push_back(i);
        }
    }
    if (odds.size() % 2 == 1){
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
    return 0;

}