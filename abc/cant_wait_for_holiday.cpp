#include <iostream>
using namespace std;

int main(){
    string s; cin>>s;
    int out;
    if (s == "SUN"){
        out = 7;
    } else if(s == "MON"){
        out = 6;
    } else if (s == "TUE"){
        out = 5;
    } else if ( s == "WED"){
        out = 4;
    } else if (s == "THU"){
        out = 3;
    } else if (s == "FRI"){
        out = 2;
    } else{
        out = 1;
    }
    cout << out << endl;
    return 0;
}
