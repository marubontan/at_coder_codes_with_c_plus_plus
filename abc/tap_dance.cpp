#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s;cin>>s;
    string flag = "Yes";
    vector <char> odds{'R', 'U', 'D'};
    vector <char> even{'L', 'U', 'D'};
    for (int i=0;i<s.size();i++){
        if (i % 2 == 0){
            if (find(odds.begin(), odds.end(), s[i]) == odds.end()){
                flag = "No";
                break;
            }
        } else {
            if (find(even.begin(), even.end(), s[i]) == even.end()){
                flag = "No";
                break;
            }
        }
    }
    cout << flag << endl;
    return 0;
}
