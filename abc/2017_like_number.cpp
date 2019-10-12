#include <iostream>
#include <map>
#include <vector>
using namespace std;

bool is_prime(const unsigned n){
    switch(n){
        case 0:
        case 1: return false;
        case 2: return true;
    }

    if(n%2 == 0) return false;

    for(unsigned i=3;i*i<=n;i+=2){
        if(n%i == 0) return false;
    }

    return true;
}

int main(){
    int q;cin>>q;
    vector<pair<int, int>> queries(q);
    int max_r = 0;
    for (int i=0;i<q;i++){
        int l, r;
        cin >> l >> r;
        if (r >= max_r){
            max_r = r;
        }
        queries[i] = make_pair(l, r);
    }
    map<int, long long> acc;
    acc[-1] = 0;
    for (int i=1;i<=max_r;i+=2){
        if (is_prime(i) && is_prime((i + 1) / 2)){
            acc[i] = acc[i - 2] + 1;
        } else {
            acc[i] = acc[i - 2];
        }
    }
    for (auto p : queries){
        cout << acc[p.second] - acc[p.first - 2] << endl;
    }
    return 0;

}