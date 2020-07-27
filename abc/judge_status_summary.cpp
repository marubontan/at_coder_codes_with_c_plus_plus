#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int ac = 0;
    int wa = 0;
    int tle = 0;
    int re = 0;
    string temp;
    for (int i=0;i<n;i++){
        cin >> temp;
        if (temp == "AC"){
            ac++;
        } else if (temp == "WA"){
            wa ++;
        } else if (temp == "TLE"){
            tle++;
        } else{
            re++;
        }
    }
    cout << "AC x " << ac << endl;
    cout << "WA x " << wa << endl;
    cout << "TLE x " << tle << endl;
    cout << "RE x " << re << endl;
    return 0;
}