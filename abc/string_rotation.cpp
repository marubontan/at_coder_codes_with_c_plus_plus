#include <iostream>
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    string success_flag = "No";
    string temp_s = s;
    for (int i=0;i<s.length();i++){
        temp_s = temp_s[s.length() - 1] + temp_s.substr(0, s.length() - 1);
        if (temp_s == t){
            success_flag = "Yes";
            break;
        }
        
    }
    cout<<success_flag<<endl;
    return 0;
}
