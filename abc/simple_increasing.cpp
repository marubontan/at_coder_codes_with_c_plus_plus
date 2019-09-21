#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> sequence(n); for (int i=0;i<n;i++){cin>>sequence[i];}
    if (n == 1){
        cout << 1 << endl;
        return 0;
    }

    vector<int> acc_info;
    int acc = 0;
    for (int i=1;i<n;i++){
        if (sequence[i-1] < sequence[i]){
            acc += 1;
        } else {
            acc_info.push_back(acc);
            acc = 0;
        }
    }
    acc_info.push_back(acc);

    long long acc_sum=0;
    for (auto a : acc_info){
        for (int i=1;i<=a+1;i++){
            acc_sum += i;
        }
    }
    cout << acc_sum << endl;
    return 0;
    
}