#include <iostream>
using namespace std;

int main(){
    string s;cin>>s;
    bool judge = false;
    for (int i=0;i<s.size();i++){
        if (s[i] == 'C'){
            for (int j=i;j<s.size();j++){
                if (s[j] == 'F'){
                    judge = true;
                    break;
                }
            }
            break;

        }
    }
    if (judge){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
}