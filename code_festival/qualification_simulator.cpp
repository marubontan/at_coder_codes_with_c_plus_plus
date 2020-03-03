#include <iostream>
using namespace std;

int main(){
    int n,a,b;cin>>n>>a>>b;
    string s;cin>>s;

    int a_acc=0;
    int b_acc=0;

    for (int i=0;i<n;i++){
        auto c = s[i];
        if (c == 'c'){
            cout << "No" << endl;
        } else if (c == 'a'){
            if (a_acc + b_acc < a + b){
                a_acc++;
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        } else {
            if (a_acc + b_acc < a + b && b_acc < b){
                b_acc++;
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}