#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;cin>>n;
    map<int, bool> buttons_state;
    for (int i=0;i<9;i++){
        buttons_state[i] = false;
    }
    int acc = 0;
    for (int i=0;i<n;i++){
        string buttons;cin>>buttons;
        for (int j=0;j<9;j++){
            if (buttons[j] == 'x'){
                acc++;
            } else if (buttons[j] == 'o' && buttons_state[j] == false){
                acc++;
                buttons_state[j] = true;
            }
            if (buttons[j] != 'o' && buttons_state[j] == true){
                buttons_state[j] = false;
            }
        }
    }
    cout << acc << endl;
    return 0;
}