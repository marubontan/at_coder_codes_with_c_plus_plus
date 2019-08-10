#include <algorithm>
#include <numeric>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> scores(n);
    for (int i=0;i<n;i++){
        cin >> scores[i];
    }
    int total_score = accumulate(scores.begin(), scores.end(), 0);
    if (total_score % 10 != 0){
        cout << total_score << endl;
    } else {
        vector<int> non_ten_divisible;
        for (auto &s : scores){
            if (s % 10 != 0){
                non_ten_divisible.push_back(s);
            }
        }
        if (non_ten_divisible.size() == 0){
            cout << 0 <<endl;
        } else {
            cout << total_score - *min_element(non_ten_divisible.begin(), non_ten_divisible.end()) << endl;
        }
    }
    return 0;

}