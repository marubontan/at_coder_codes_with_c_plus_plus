#include <algorithm>
#include <iostream>
#include <bitset>
#include <vector>
using namespace std;


int main(){
    int n,x;cin>>n>>x;
    int acc = 0;
    bitset<20> value(x);
    
    string s = value.to_string();
    vector<int> target_index;
    for (int i=0;i<20;i++){
        if (s[i] == '1'){
            target_index.push_back(20 - i - 1);
        }
    }


    for (int i=0;i<n;i++){
        int temp;cin>>temp;
        if (find(target_index.begin(), target_index.end(), i) != target_index.end()){
            acc += temp;
        }
    }

    cout << acc << endl;

    return 0;

}