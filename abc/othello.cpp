#include <iostream>
#include <vector>
using namespace std;

vector<int> cumsum(vector<int> v){
    vector<int> o;
    int acc = 0;
    for (auto k : v){
        o.push_back(acc += k);
    }
    return o;
}

int main(){
    int n,q;cin>>n>>q;
    vector<int> othello(n+1, 0);
    for (int i=0;i<q;i++){
        int l,r;cin>>l>>r;
        othello[l-1]++;
        othello[r]--;
    }
    auto acc = cumsum(othello);
    for (int i=0;i<n;i++){
        if (acc[i] % 2 == 0){
            cout << 0;
        } else {
            cout << 1;
        }
    }
    cout << endl;
    return 0;

}