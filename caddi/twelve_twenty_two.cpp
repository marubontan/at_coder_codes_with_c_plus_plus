#include <iostream>
using namespace std;

int main(){
    string s;cin>>s;
    int acc = 0;
    for (auto c:s){
        if (c == '2'){
            acc++;
        }
    }
    cout << acc <<endl;
    return 0;
}