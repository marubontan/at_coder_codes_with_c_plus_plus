#include <iostream>
using namespace std;

int main(){
    string s;cin>>s;
    int acc = 0;
    string previous_word = "";
    string current_word = "";

    for (int i=0;i<s.size();i++){
        current_word += s[i];
        if (previous_word != current_word){
            acc++;
            previous_word = current_word;
            current_word = "";
        }
    }
    cout << acc << endl;
    return 0;
}