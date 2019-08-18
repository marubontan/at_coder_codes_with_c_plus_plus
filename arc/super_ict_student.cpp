#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    string acc = "";
    for (int i=0;i<s.size();i++){
        if (acc == "" && s[i] == 'i'){
            acc = "i";
        } else if (acc == "i" && s[i] == 'c'){
            acc = "ic";
        } else if (acc == "ic" && s[i] == 't'){
            acc = "ict";
        }
    }
    if (acc == "ict"){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
