#include <iostream>
using namespace std;

int main(){
    string n;cin>>n;
    bool all_nine = true;
    if (n.size() == 1){
        cout << n[0] << endl;
        return 0;
    }
    for (int i=1;i<n.size();i++){
        if (n[i] != '9'){
            all_nine = false;
            break;
        }
    }

    if (n.size() == 1){
        cout << n[0] << endl;
    } else {
        if (all_nine){
            int acc = 0;
            for (int i=0;i<n.size();i++){
                acc += (int)n[i] - 48;
            }
            cout << acc << endl;
        } else {
            cout << 9 * (n.size() - 1) + (int)n[0] - 49 << endl;
        }
    }
    return 0;
}