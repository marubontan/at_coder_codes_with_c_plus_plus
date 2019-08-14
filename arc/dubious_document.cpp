#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

map<char, int> counter(string letters){
    map<char, int> frequency;
    for (auto &s : letters){
        ++frequency[s];
    }
    return frequency;
}

int main(){
    int n;
    cin >> n;
    vector<string> papers(n);
    for (int i=0;i<n;i++){
        cin >> papers[i];
    }

    map<char, int> original;
    for (int i=0;i<n;i++){
        if (i == 0){
            original = counter(papers[i]);
        } else {
            auto letter_frequency_counter = counter(papers[i]);
            for (auto &item : original){
                original[item.first] = min(item.second, letter_frequency_counter[item.first]);
            }

        }
    }
    vector<char> letters;
    for (auto &item : original){
        if (item.second != 0){
            for (int i = 0; i< item.second; i++){
                letters.push_back(item.first);
            }
        }
    }
    sort(letters.begin(), letters.end());
    if (letters.size() == 0){
        cout << "";
    } else {
        for (auto &letter : letters){
            cout << letter;
        }
    }
}