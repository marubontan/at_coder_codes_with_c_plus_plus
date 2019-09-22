#include <iostream>
using namespace std;

int main(){
    string s;cin>>s;
    string keyence = "keyence";

    int target_index;
    for (int i=0;i<keyence.size();i++){
        if (s[i] == keyence[i]){
            continue;
        } else {
            target_index=i;
            break;
        }
    }
    string trimmed_keyence = keyence.substr(target_index, keyence.size());
    string trimmed_s = s.substr(s.size()-trimmed_keyence.size(), s.size());
    if (trimmed_s == trimmed_keyence){
        cout << "YES" <<endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;

}