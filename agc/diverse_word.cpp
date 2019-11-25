#include <iostream>
#include <set>
using namespace std;

int main(){
    string s;cin>>s;
    if (s.size() < 26){
        set<char> used_alphabet;
        for (int i=0;i<s.size();i++){
            used_alphabet.insert(s[i]);
        }
        string alphabet = "abcdefghijklmnopqrstuvwxyz";
        for (int i=0;i<alphabet.size();i++){
            if (used_alphabet.find(alphabet[i]) == used_alphabet.end()){
                cout << s << alphabet[i] << endl;
                return 0;
            }
        }

    } else {
        if (s == "zyxwvutsrqponmlkjihgfedcba"){
            cout << -1 << endl;
        } else {
            int delimiter;
            for (int i=25;i>0;i--){
                if (s[i] > s[i-1]){
                    delimiter = i - 1;
                    break;
                }
            }
            string target = s.substr(delimiter, 26 - delimiter);
            char append_char;
            for (int i=target.size() - 1;i>=0;i--){
                if (target[i] > s[delimiter]){
                    append_char = target[i];
                    break;
                }

            }
            cout << s.substr(0, delimiter) << append_char << endl;

        }
        return 0;
    }
}
