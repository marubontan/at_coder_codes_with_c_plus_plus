#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s, t; cin >> s >> t;
    vector<char> replacable {'a', 't', 'c', 'o', 'd', 'e', 'r'};
    bool flag = true;
    for (int i=0;i<s.size();i++){
        if (s[i] == t[i] || (s[i] == '@' && find(replacable.begin(), replacable.end(), t[i])!=replacable.end()) || (t[i] == '@' && find(replacable.begin(), replacable.end(), s[i])!=replacable.end())){
            continue;
        } else {
            flag = false;
            break;
        }
    }
    if (flag){
        cout << "You can win" << endl;
    } else {
        cout << "You will lose" << endl;
    }
}