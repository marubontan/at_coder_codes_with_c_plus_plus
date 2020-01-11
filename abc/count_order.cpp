#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    int n;cin>>n;
    string p = "";
    string q = "";
    string temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        p += temp;
        }
    for(int i=0;i<n;i++){
        cin>>temp;
        q += temp;
        }

    vector<int> original(n);
    for (int i=0;i<n;i++){
        original[i] = i+1;
    }
    vector<string> original_string;
    do {
        string target = "";
        for (auto i : original){
            target += to_string(i);
        }
        original_string.push_back(target);
    } while (next_permutation(original.begin(), original.end()));

    sort(original_string.begin(), original_string.end());

    int p_ind;
    int q_ind;
    for (int i=0;i<original_string.size();i++){
        if (original_string[i] == p){
            p_ind = i + 1;
        }
        if (original_string[i] == q){
            q_ind = i + 1;
        }
    }
    cout << abs(p_ind - q_ind) << endl;
    return 0;

}