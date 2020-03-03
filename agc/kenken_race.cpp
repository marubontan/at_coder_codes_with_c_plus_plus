#include <iostream>
using namespace std;

int main(){
    int n,a,b,c,d;cin>>n>>a>>b>>c>>d;
    string s;cin>>s;

    bool judgement = true;
    bool rock = false;
    bool adjascent_three_free_space = false;
    a--;
    b--;
    c--;
    d--;

    if (c < d){
        for (int i=a;i<d;i++){
            if (rock){
                if (s[i] == '#'){
                    judgement = false;
                    break;
                }
            }
            if (s[i]=='#'){
                rock = true;
            } else {
                rock = false;
            }
        }
        if (judgement){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        for (int i=a;i<c;i++){
            if (b <= i && i <= d){
                if (s[i - 1] == '.' && s[i] == '.' && s[i + 1] == '.'){
                    adjascent_three_free_space = true;
                }
            }
            if (rock){
                if (s[i] == '#'){
                    judgement = false;
                    break;
                }
            }
            if (s[i]=='#'){
                rock = true;
            } else {
                rock = false;
            }
        }
        if (judgement && adjascent_three_free_space){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}