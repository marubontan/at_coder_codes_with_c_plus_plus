#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long n, x;cin>>n>>x;
    vector<long long> children(n);for(int i=0;i<n;i++){cin>>children[i];}
    sort(children.begin(), children.end());

    long long acc = 0;
    for(int i=0;i<n;i++){
        if (x >= children[i]){
            x -= children[i];
            acc++;
            if (i==n-1 && x > 0){
                acc--;
            }
        } else {
            break;
        }
    }
    if (acc == 0){
        cout << 0 << endl;
        return 0;
    }
    cout << acc << endl;
    return 0;
}