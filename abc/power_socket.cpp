#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int plug_acc = 0;
    int tap_acc = 0;
    while (1){
        tap_acc += 1;
        plug_acc += a;
        if (plug_acc >= b){
            break;
        } else {
            plug_acc -= 1;
        }
    }
    if (b == 1){
        cout << 0 << endl;
    } else {
        cout << tap_acc << endl;
    }

    return 0;
}