#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

map<char, long long> counter(vector<string> s){
    map<char, long long> c;
    vector<char> march{'M', 'A', 'R', 'C', 'H'};
    for (auto i : s){
        if (find(march.begin(), march.end(), i[0]) != march.end()){
            c[i[0]]++;
        }
    }
    return c;
}

int main(){
    int n; cin>>n;
    vector<string> names(n); for (int i=0;i<n;i++){cin>>names[i];}

    auto freq = counter(names);
    if (freq.size() < 3){
        cout << 0 << endl;
        return 0;
    }
    long long ans;
    ans = freq['M'] * freq['A'] * freq['R'] + freq['M'] * freq['A'] * freq['C'] + freq['M'] * freq['A'] * freq['H'] + freq['M'] * freq['R'] * freq['C'] + freq['M'] * freq['R'] * freq['H'] + freq['M'] * freq['C'] * freq['H'] + freq['A'] * freq['R'] * freq['C'] + freq['A'] * freq['R'] * freq['H'] + freq['A'] * freq['C'] * freq['H'] + freq['R'] * freq['C'] * freq['H'];
    cout << ans << endl;
    return 0;

}