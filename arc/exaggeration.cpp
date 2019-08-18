#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s;
    int a, b, c, d;
    cin >> s;
    cin >> a >> b >> c >> d;

    string acc = "";
    string pre_fix = "P";
    s = pre_fix  + s;
    for (int i=0;i<s.size();i++){
        acc.append(1u, s[i]);
        if (i == a || i == b || i == c || i == d){
            acc.append(1u, '"');
        }
    }
    for (int i=1;i<acc.size();i++){
        cout << acc[i];
    }
    cout << endl;

    return 0;
}