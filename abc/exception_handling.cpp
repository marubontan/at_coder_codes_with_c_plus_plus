#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

map<int, int> counter(vector<int> sequence){
    map<int, int> freq;
    for (auto s : sequence){
        freq[s]++;
    }
    return freq;
}


int main(){
    int n; cin >> n;
    vector<int> sequence(n); for (int i=0;i<n;i++){cin >> sequence[i];}

    int max_val = *max_element(sequence.begin(), sequence.end());
    auto freq = counter(sequence);
    int second_max = 0;
    for (auto item : freq){
        if (second_max <= item.first){
            if (item.first != max_val){
                second_max = item.first;
            }
        }
    }

    for (auto s: sequence){
        if (s == max_val){
            if (freq[s] == 1){
                cout << second_max << endl;
            } else {
                cout << max_val << endl;
            }
        } else {
            cout << max_val << endl;
        }
    }
    return 0;
}