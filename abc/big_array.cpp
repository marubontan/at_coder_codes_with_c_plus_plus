#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n; cin >> n;
    long long k; cin >> k;
    int a;
    long long b;
    vector<pair<int, int>> nums(n);
    for (int i=0;i<n;i++){
        cin >> a >> b;
        nums[i] = {a, b};
    }
    sort(nums.begin(), nums.end());

    for (auto item: nums){
        k -= item.second;
        if (k <= 0){
            cout << item.first << endl;
            break;
        }
    }
    return 0;

}
