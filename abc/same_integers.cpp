#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a, b, c;cin>>a>>b>>c;
    vector<int> nums{a, b, c};
    sort(nums.begin(), nums.end());
    int small = nums[0];
    int mid = nums[1];
    int big = nums[2];

    int first = big - mid;
    if ((big - (small + first)) % 2 == 0){
        cout << first + (big - (small + first)) / 2 << endl;
    } else {
        cout << first + ((big - (small + first)) / 2) + 2 << endl; 
    }
    return 0;
}