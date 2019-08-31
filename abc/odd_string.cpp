#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    string new_s;
    for (int i=0;i<s.size();i++){
        if (i % 2 == 0){
            new_s+=s[i];
        }
    }
    cout << new_s << endl;
    return 0;
}