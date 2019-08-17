#include <iostream>
#include <regex>
using namespace std;

int main(){
    string s;
    cin >> s;

    regex re("\\d");
    for (int i=0;i<s.size();i++){
        string str(1, s[i]);
        if (regex_match(str, re)){
            cout << str;
        }
    }
    return 0;
}