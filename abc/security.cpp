#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    char latest_letter;
    bool flag = true;
    for (int i = 0; i< s.size(); i++){
        if (latest_letter == s[i]){
            flag = false;
            break;
        } else{
            latest_letter = s[i];
        }
    }
    if (flag){
        cout<<"Good";
    } else{
        cout<<"Bad";
    }
    return 0;
    
}
