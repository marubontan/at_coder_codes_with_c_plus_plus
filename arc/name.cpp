#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    string name;
    cin >> name;

    string reverse_name(name);
    reverse(reverse_name.begin(), reverse_name.end());

    int state = 1;
    for (int i=0;i<name.size();i++){
        if (name[i] != reverse_name[i]){
            state = 0;
            break;
        }
    }
    if (state == 0){
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
    return 0;

}