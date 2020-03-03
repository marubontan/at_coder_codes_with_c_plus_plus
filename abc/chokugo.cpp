#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s;cin>>s;
    vector<char> one_letter{'o', 'k', 'u', 'c'};
    
    bool judgement = true;
    bool two_letters = false;
    for (int i=0;i<s.size();i++){
        if (two_letters){
            if (s[i] != 'h'){
                judgement = false;
            } else {
                two_letters = false;
                continue;
            }
        }
        if (find(one_letter.begin(), one_letter.end(), s[i]) == one_letter.end()){
            judgement = false;
            break;
        }
        if (s[i] == 'c'){
            two_letters = true;
        }
    }

    if (judgement){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
    

}