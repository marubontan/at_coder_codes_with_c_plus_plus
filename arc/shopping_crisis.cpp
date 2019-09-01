#include <iostream>
#include <map>
using namespace std;

int main(){
    string s;
    cin >> s;

    map<char, char> fix{
        {'O', '0'},
        {'D', '0'},
        {'I', '1'},
        {'Z', '2'},
        {'S', '5'},
        {'B', '8'}
    };
    string acc;
    for (int i=0;i<s.size();i++){
        if (fix.find(s[i]) != fix.end()){
            acc += fix[s[i]];
        } else {
            acc += s[i];
        }
    }
    cout << acc << endl;
    return 0;
}