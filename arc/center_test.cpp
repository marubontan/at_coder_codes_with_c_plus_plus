#include <iostream>
#include <map>
using namespace std;

map<char, int> counter(string s){
    map<char, int> output;
    for (auto k: s){
        output[k]++;
    }
    return output;
}


int main(){
    int n;cin>>n;
    string s;cin>>s;

    auto freq = counter(s);

    int max_score = 0;
    int min_score = n;
    for (auto item : freq){
        if (item.second > max_score){
            max_score = item.second;
        }
        if (item.second < min_score){
            min_score = item.second;
        }
    }
    if (freq.size() < 4){
        min_score = 0;
    }
    cout << max_score << " " << min_score << endl;
    return 0;

}