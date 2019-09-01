#include <iostream>
using namespace std;

int main(){
    string s, t;
    cin >> s;
    cin >> t;

    int acc = 0;
    for (int i=0;i<s.size();i++){
        if (s[i] == t[i]){
            acc += 1;
        }
    }
    cout << acc << endl;
    return 0;
}