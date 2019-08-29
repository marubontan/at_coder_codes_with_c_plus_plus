#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int acc = 0;
    for (int i=0;i<s.size();i++){
        acc += (int)(s[i]) - '0';
    }
    if (stoi(s) % acc == 0){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}