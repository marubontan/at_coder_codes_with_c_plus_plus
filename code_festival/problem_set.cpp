#include <iostream>
#include <map>
#include <vector>
using namespace std;

map<long long, int> counter(vector<long long> sequence){
    map<long long, int> freq;
    for (auto s:sequence){
        freq[s]++;
    }
    return freq;
}

int main(){
    int n,m; cin >> n;
    vector<long long> sequence(n);for (int i=0;i<n;i++){cin>>sequence[i];}
    auto freq = counter(sequence);
    cin >> m;
    bool flag = true;
    long long temp;
    for (int i=0;i<m;i++){
        cin >> temp;
        if (freq[temp] == 0){
            flag = false;
        }
        freq[temp]--;
    }
    if (flag){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}