#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;cin>>n;
    vector<long long> sequence(n);for (int i=0;i<n;i++){cin>>sequence[i];}
    if (n<=2){
        cout << 1 << endl;
        return 0;
    }
    string inc_dec_flag="NEUTRAL";
    int acc=0;
    for (int i=0;i<n-1;i++){
        long long prev = sequence[i];
        long long post = sequence[i+1];
        if (inc_dec_flag == "NEUTRAL"){
            if (prev < post){
                inc_dec_flag = "INCREASE";
            } else if (prev > post){
                inc_dec_flag = "DECREASE";
            }
        } else if(inc_dec_flag == "INCREASE"){
            if (prev <= post){
                continue;
            } else {
                acc++;
                inc_dec_flag = "NEUTRAL";
            }
        } else {
            if (prev >= post){
                continue;
            } else {
                acc++;
                inc_dec_flag = "NEUTRAL";
            }
        }
    }
    cout << acc + 1 << endl;
    return 0;
}