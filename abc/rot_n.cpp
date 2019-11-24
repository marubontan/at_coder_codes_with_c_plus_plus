#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;cin>>n;
    string s;cin>>s;

    map<char, int> alphabet{
        {'A', 0},
        {'B', 1},
        {'C', 2},
        {'D', 3},
        {'E', 4},
        {'F', 5},
        {'G', 6},
        {'H', 7},
        {'I', 8},
        {'J', 9},
        {'K', 10},
        {'L', 11},
        {'M', 12},
        {'N', 13},
        {'O', 14},
        {'P', 15},
        {'Q', 16},
        {'R', 17},
        {'S', 18},
        {'T', 19},
        {'U', 20},
        {'V', 21},
        {'W', 22},
        {'X', 23},
        {'Y', 24},
        {'Z', 25}
    };
    map<int, char> rev_alphabet;
    for (auto item : alphabet){
        rev_alphabet[item.second] = item.first;
    }

    for (int i=0;i<s.size();i++){
        cout << rev_alphabet[(alphabet[s[i]] + n) % 26];
    }
    cout << endl;
    return 0;


}