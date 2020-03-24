#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> nums(n);for (int i=0;i<n;i++){cin>>nums[i];};

    bool flag = true;
    for (auto k : nums){
        if (k % 2 == 0){
            if (k % 3 != 0 && k % 5 != 0){
                flag = false;
                break;
            }
        }
    }
    if (flag){
        cout << "APPROVED" << endl;
    } else {
        cout << "DENIED" << endl;
    }
    return 0;
}
