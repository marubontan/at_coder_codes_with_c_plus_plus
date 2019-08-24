#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s;
    cin >> s;
    int center_index = s.size() / 2;
    vector<char> left;
    vector<char> right;
    for (int i=0;i<s.size();i++){
        if (i < center_index){
            left.push_back(s[i]);
        } else {
            right.push_back(s[i]);
        }
    }
    if (s.size() % 2 == 1){
        right.erase(right.begin());
    }

    reverse(right.begin(), right.end());

    string state = "YES";
    for (int i=0;i<center_index;i++){
        if ((left[i] == '*' || right[i] == '*') || left[i] == right[i]){
            continue;
        } else {
            state = "NO";
            break;
        }
    }
    cout << state << endl;
}