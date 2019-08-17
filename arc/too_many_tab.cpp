#include <iostream>
using namespace std;

int main(){
    int n, l;
    cin >> n >> l;
    string s;
    cin >> s;
    
    int tab_number = 1;
    int crush_counter = 0;
    for (int i=0;i<n;i++){
        if (s[i] == '+'){
            tab_number += 1;
        } else {
            tab_number -= 1;
        }

        if (tab_number > l){
            crush_counter += 1;
            tab_number = 1;
        }
    }
    cout << crush_counter << endl;
    return 0;
}