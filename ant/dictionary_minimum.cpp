#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    string s;cin>>s;

    string t = "";
    for (int i=0;i<n;i++){
        if (s[0] < s[n-i-1]){
            t += s[0];
            s = string(s.begin() + 1, s.end());
        } else {
            t += s[n-i-1];
            s = string(s.begin(), s.end() - 1);
        }
    }
    cout << t << endl;
    return 0;

}