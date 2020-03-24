#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector<int> nums(3);
    for (int i=0;i<3;i++){
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());

    nums.resize(distance(nums.begin(), unique(nums.begin(), nums.end())));
    if (nums.size() == 2){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}