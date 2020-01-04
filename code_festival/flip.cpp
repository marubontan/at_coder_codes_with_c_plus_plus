#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,m,k;cin>>n>>m>>k;

    vector<int> nums;
    nums.push_back(0);
    for (int i=1;i<=n;i++){
        int start = i * m;
        nums.push_back(start);
        for (int j=1;j<=m;j++){
            nums.push_back(start + (n - i) * j - i * j);
        }
    }
    for (int i=1;i<=m;i++){
        int start = i * n;
        nums.push_back(start);
        for (int j=1;j<=n;j++){
            nums.push_back(start + (m - i) * j - i * j);
        }
    }
    if (find(nums.begin(), nums.end(), k) != nums.end()){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;


}