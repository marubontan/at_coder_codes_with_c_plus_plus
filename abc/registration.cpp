#include <iostream>
using namespace std;

int main(){
    string s, t;
    cin>>s;
    cin>>t;
    if (s.size() + 1 == t.size() && t.substr(0, s.size()) == s){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}