#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    string cap_s, s;
    cin >> cap_s >> s;
    
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    if (cap_s == s){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;

}