#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    string s;cin>>s;

    int acc = 0;
    for (int i=1;i<n-1;i++){
        if (s[i-1] == 'A' && s[i] == 'B' && s[i+1] == 'C'){
            acc++;
        }
    }
    cout << acc << endl;
    return 0;
}