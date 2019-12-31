#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> nums(n);for (int i=0;i<n;i++){cin>>nums[i];}

    int acc = 0;
    bool consecutive = false;
    for (int i=0;i<n;i++){
        if (nums[i] == i + 1){
            if (consecutive){
                consecutive = false;
            } else {
                acc++;
                consecutive = true;
            }
        } else {
            consecutive = false;
        }
    }
    cout << acc << endl;
    return 0;

}