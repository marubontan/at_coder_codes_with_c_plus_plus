#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    string s;cin>>s;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    int min_acc = 10000000;
    for (int i=0;i<alphabet.size();i++){
        string copied_s = s;
        auto alph = alphabet[i];
        if (find(s.begin(), s.end(), alph) == s.end()){
            continue;
        }
        int acc = 0;
        while (true){
            bool flag = true;
            for (int i=0;i<copied_s.size();i++){
                if (copied_s[i] != alph){
                    flag = false;
                }
            }
            if (flag){
                break;
            }
            string temp_s = "";
            for (int i=0;i<copied_s.size() - 1;i++){
                if (copied_s[i] == alph || copied_s[i+1] == alph){
                    temp_s += alph;
                } else {
                    temp_s += copied_s[i];
                }
            }
            copied_s = temp_s;
            acc++;
        }
        if (min_acc > acc){
            min_acc = acc;
        }
    }
    cout << min_acc << endl;
    return 0;
}