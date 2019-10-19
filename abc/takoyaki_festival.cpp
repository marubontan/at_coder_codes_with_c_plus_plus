#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> takoyaki(n);for (int i=0;i<n;i++){cin>>takoyaki[i];}

    int acc = 0;
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            acc += takoyaki[i] * takoyaki[j];
        }
    }
    cout << acc << endl;
    return 0;

}