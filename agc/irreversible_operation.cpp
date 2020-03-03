#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s;cin>>s;
    if (s.size() == 1){
        cout << 0 << endl;
        return 0;
    }
    vector<int> w_indices;
    for (int i=0;i<s.size();i++){
        if (s[i] == 'W'){
            w_indices.push_back(i);
        }
    }
    long long acc = 0;
    for (int i=0;i<w_indices.size();i++){
        acc += w_indices[i] - i;
    }
    cout << acc << endl;
    return 0;
}