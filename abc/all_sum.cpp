#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,k;cin>>n>>k;
    vector<long long> sequence(n);for(int i=0;i<n;i++){cin>>sequence[i];}

    long long acc = 0;
    vector<long long> acc_sequence;
    for (auto i : sequence){
        acc += i;
        acc_sequence.push_back(acc);
    }
    long long total_acc = 0;
    for (int i=k-1;i<n;i++){
        if (i==k-1){
            total_acc += acc_sequence[i];
        } else {
            total_acc += acc_sequence[i] - acc_sequence[i - k];
        }
    }
    cout << total_acc << endl;
}