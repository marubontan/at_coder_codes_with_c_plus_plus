#include <iostream>
using namespace std;

int main(){
    string s; cin >> s;
    string aiueo = "aiueo";
    for (int i=0;i<s.size();i++){
        if (aiueo.find(s[i]) == string::npos){
            cout << s[i];
        }
    }
    cout << endl;
}
