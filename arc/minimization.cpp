#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long n, k;cin>>n>>k;
    vector<long long> nums(n);for(long long i=0;i<n;i++){cin>>nums[i];}

    if ((n - k) % (k - 1) == 0){
        cout << (n - k) / (k - 1) + 1 <<endl;
    } else {
        cout << (n - k) / (k - 1) + 2 <<endl;
    }
    return 0;

}