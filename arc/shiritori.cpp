#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;cin>>n;
    vector<string> storage;
    string prev_word;cin>>prev_word;
    storage.push_back(prev_word);
    if (n == 1){
        cout << "DRAW" << endl;
        return 0;
    }
    vector<string> word(n-1);for (int i=0;i<n-1;i++){cin>>word[i];}
    string post_word;
    for (int i=0;i<n-1;i++){
        post_word = word[i];
        if (find(storage.begin(), storage.end(), post_word) != storage.end() || prev_word[prev_word.size()-1] != post_word[0]){
            if (i % 2 == 0){
                cout << "WIN" << endl;
            } else {
                cout << "LOSE" << endl;
            }
            return 0;
        } else {
            prev_word = post_word;
            storage.push_back(post_word);
        }
    }
    cout << "DRAW" << endl;
    return 0;
}