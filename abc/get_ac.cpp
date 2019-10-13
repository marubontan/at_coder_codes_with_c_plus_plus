#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, q;cin>>n>>q;
    string s;cin>>s;
    vector<int> acc(n);
    acc[0] = 0;
    for (int i=1;i<n;i++){
        if (s[i-1] == 'A' && s[i] == 'C'){
            acc[i] = acc[i-1] + 1;
        } else {
            acc[i] = acc[i-1];
        }
    }
    int l,r;
    vector<pair<int, int>> query;
    for (int i=0;i<q;i++){
        cin >> l >> r;
        query.push_back(make_pair(l, r));
    }

    for (auto item : query){
        if (s[item.first-1] == 'C'){
            cout << acc[item.second-1] - acc[item.first-1] << endl;

        } else {
            if (item.first == 1){
                cout << acc [item.second - 1] <<endl;
            } else {
                cout << acc[item.second-1] - acc[item.first-2] << endl;
            }
        }

    }

    return 0;
}