#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    if (s[0] != 'A') cout<<"WA"<<endl;
    else{
        int capital_c_number = 0;
        for (int i=2;i<s.length()-1;i++){
            if (s[i] == 'C') capital_c_number++;
        }
        if (capital_c_number != 1) cout<<"WA"<<endl;
        else{
            int capital_letter_number = 0;
            for (int i=0;i<s.length();i++){
                if (isupper(s[i])) capital_letter_number++;;
            }
            if (capital_letter_number != 2) cout<<"WA"<<endl;
            else cout<<"AC"<<endl;
        }
    }

    return 0;
}
