#include <iostream>
using namespace std;

int main(){
    string s; cin>>s;
    long long acc;
    for (int i=0;i<s.size();i++){
        if (s[i] == 'U'){
            acc += 2 * i + s.size() - 1 - i;
        } else {
            acc += i + 2 * (s.size() - 1 - i);
        }
    }
    cout << acc << endl;
}