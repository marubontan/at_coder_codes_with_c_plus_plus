#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;cin>>n;
    map<long long, int> nums;
    long long temp;
    for (int i=0;i<n;i++){
        cin >> temp;
        if (nums[temp] == 0){
            nums[temp]++;
        } else {
            nums[temp] = 0;
        }
    }
    int acc=0;
    for (auto item : nums){
        if (item.second != 0){
            acc++;
        }
    }
    cout << acc << endl;
    return 0;
}