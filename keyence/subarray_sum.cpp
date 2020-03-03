#include <iostream>
using namespace std;

int main(){
    long long n,k,s;cin>>n>>k>>s;

    for (long long i=0;i<k;i++){
        if (i == n-1){
            cout << s << endl;
        } else {
            cout << s << " ";
        }
    }
    for (long long i=0;i<n-k;i++){
        if (i == n - k - 1){
            if (s == 1000000000){
                cout << 1 << endl;
            } else {
                cout << s + 1 << endl;
            }
        } else {
            if (s == 1000000000){
                cout << 1 << endl;
            } else {
                cout << s + 1 <<" ";
            }
        }
    }
    return 0;
}