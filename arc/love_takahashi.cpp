#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> words(n);
    for (int i=0;i<n;i++){
        cin >> words[i];
    }
    int total = 0;
    for (int i=0;i<n;i++){
        if (i == n-1){
            if (words[i] == "TAKAHASHIKUN." || words[i] == "Takahashikun." || words[i] == "takahashikun."){
                total += 1;
            }
        } else {
            if (words[i] == "TAKAHASHIKUN" || words[i] == "Takahashikun" || words[i] == "takahashikun"){
                total += 1;
            }
            
        }
    }
    cout << total << endl;
}
