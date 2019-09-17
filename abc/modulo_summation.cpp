#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n;cin>>n;
    vector<long long> nums(n); for(int i=0;i<n;i++){cin >> nums[i];}
    int acc = 0;
    for (auto v:nums){
        acc += v - 1;
    }
    cout << acc << endl;
    return 0;

}