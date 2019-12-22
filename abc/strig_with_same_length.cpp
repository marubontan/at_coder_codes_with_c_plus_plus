#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    string s,t;
    cin>>s;
    cin>>t;

    for (int i=0;i<n;i++){
        cout << s[i];
        cout << t[i];
    }
    cout << endl;
}