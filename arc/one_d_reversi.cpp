#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    char latest = s[0];
    int acc = 0;
    for (int i=1;i<s.size();i++){
        if (s[i] != latest){
            acc += 1;
        }
        latest = s[i];
    }
    cout << acc << endl;
    return 0;
}