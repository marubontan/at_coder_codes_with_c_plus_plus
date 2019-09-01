#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

map<char, long long> counter(string word){
    map<char, long long> frequency;
    for (int i=0;i<word.size();i++){
        frequency[word[i]] += 1;
    }
    return frequency;
}

map<map<char, long long>, long long> map_counter(vector<map<char, long long>> m){
    map<map<char, long long>, long long> frequency;
    for (auto &item : m){
        frequency[item] += 1;
    }

    return frequency;
}
int main(){
    long long n; cin >> n;
    vector<string> words(n); for (long long i=0;i<n;i++){cin >> words[i];}
    
    vector<map<char, long long>> frequency_counter(n);
    transform(words.begin(), words.end(), frequency_counter.begin(), counter);

    auto f = map_counter(frequency_counter);
    long long acc = 0;
    for (auto &i : f){
        if (i.second == 1){
            continue;
        } else {
            acc += (1 + i.second - 1) * (i.second - 1) / 2;
        }
    }
    cout << acc << endl;
    return 0;
}
