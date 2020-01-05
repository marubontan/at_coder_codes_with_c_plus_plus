#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

vector<pair<int, int>> most_common(vector<int> nums){
    map<int, int> frequency;
    for (auto n : nums){
        frequency[n]++;
    }
    vector<pair<int, int>> freq_key;
    for (auto item: frequency){
        freq_key.push_back(make_pair(item.second, item.first));
    }
    sort(freq_key.begin(), freq_key.end(), greater<pair<int, int>>());
    vector<pair<int, int>> output;
    if (freq_key.size() == 1){
        output.push_back(freq_key[0]);
    } else {
        output.push_back(freq_key[0]);
        output.push_back(freq_key[1]);
    }
    return output;

}

int main(){
    int n;cin>>n;
    vector<int> even;
    vector<int> odd;
    for (int i=0;i<n;i++){
        int temp;cin>>temp;
        if (i % 2 == 0){
            even.push_back(temp);
        } else {
            odd.push_back(temp);
        }
    }
    auto most_common_even_pair = most_common(even);
    auto most_common_odd_pair = most_common(odd);

    if (most_common_even_pair[0].second == most_common_odd_pair[0].second){
        if (most_common_even_pair.size() == 2 && most_common_odd_pair.size() == 2){
            if (most_common_even_pair[0].first + most_common_odd_pair[1].first < most_common_even_pair[1].first + most_common_odd_pair[0].first){
                cout << n - most_common_even_pair[1].first - most_common_odd_pair[0].first << endl;
            } else {
                cout << n - most_common_even_pair[0].first - most_common_odd_pair[1].first << endl;
            }
        } else {
            if (most_common_even_pair.size() == 1 && most_common_odd_pair.size() == 2){
                cout << n - most_common_even_pair[0].first - most_common_odd_pair[1].first << endl;
            } else if (most_common_even_pair.size() == 2 && most_common_odd_pair.size() == 1){
                cout << n - most_common_even_pair[1].first - most_common_odd_pair[0].first << endl;
            } else {
                cout << n - most_common_even_pair[0].first << endl;
            }
        }

    } else {
        cout << n - most_common_even_pair[0].first - most_common_odd_pair[0].first << endl;
    }
    return 0;
}