#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    int max_intersection=0;
    for (int i=1;i<n;i++){
        vector<char> v;
        vector<char> left(s.begin(), s.begin()+i);
        vector<char> right(s.begin()+i, s.end());
        sort(left.begin(), left.end());
        left.erase(unique(left.begin(), left.end()), left.end());
        sort(right.begin(), right.end());
        right.erase(unique(right.begin(), right.end()), right.end());

        auto point = set_intersection(left.begin(), left.end(), right.begin(), right.end(), back_inserter(v));
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
        if (v.size() >= max_intersection){
            max_intersection = v.size();
        }
    }
    cout << max_intersection << endl;
    return 0;
}
