#include <iostream>
using namespace std;

int main(){
    string s;cin>>s;

    int s_size = s.size() / 2;
    int hug_counter = 0;
    for (int i=0;i<s_size;i++){
        if (s[i] != s[s.size() - 1 - i]){
            hug_counter++;
        }
    }
    cout << hug_counter << endl;
    return 0;

}