#include <iostream>
using namespace std;

int main(){
    string s;cin>>s;
    string piano = "WBWBWWBWBWBW";
    string Do = piano.substr(0, 12) + piano.substr(0, 8);
    string Re = piano.substr(2, 9) + piano.substr(0, 11);
    string Mi = piano.substr(3, 8) + piano.substr(0, 12);
    string Fa = piano.substr(4, 7) + piano.substr(0, 12) + piano.substr(0, 1);
    string So = piano.substr(5, 6) + piano.substr(0, 12) + piano.substr(0, 2);
    string La = piano.substr(6, 5) + piano.substr(0, 12) + piano.substr(0, 3);
    string Si = piano.substr(7, 4) + piano.substr(0, 12) + piano.substr(0, 4);

    string val;
    if (s == Do){
        val = "Do";
    } else if (s == Re){
        val = "Re";
    } else if (s == Mi){
        val = "Mi";
    } else if (s == Fa){
        val = "Fa";
    } else if (s == So){
        val = "So";
    } else if (s == La){
        val = "La";
    } else {
        val = "Si";
    }
    cout << val <<endl;
    return 0;

}