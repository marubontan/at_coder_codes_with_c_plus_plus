#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long n, x;cin>>n>>x;
    vector<long long> nums(n);
    for (long long i=0;i<n;i++){
        cin>>nums[i];
    }    

    long long acc = 0;
    if(nums[0] > x){
        acc += nums[0] - x;
        nums[0] = x;
    }
    for (long long i=0;i<n-1;i++){
        long long temp = (nums[i] + nums[i+1]) - x;
        
        if (temp > 0){
            acc += temp;
            nums[i+1] -= temp;
        }
    }
    cout << acc << endl;
    return 0;
}