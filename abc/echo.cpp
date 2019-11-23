#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    string s;cin>>s;

    if (n%2!=0){
        cout << "No" << endl;
    } else {
        int point = n / 2;
        if (s.substr(0, point) == s.substr(point, point)){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}