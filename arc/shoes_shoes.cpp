#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int l, r;
    cin >> l >> r;
    vector<int> left_shoes(l);
    vector<int> right_shoes(r);
    for (int i=0;i<l;i++){
        cin >> left_shoes[i];
    }
    for (int i=0;i<r;i++){
        cin >> right_shoes[i];
    }

    int acc = 0;
    for (auto &l_shoe : left_shoes){
        if (right_shoes.size() == 0){
            break;
        }
        for (int i=0;i<right_shoes.size();i++){
            if (l_shoe == right_shoes[i]){
                acc++;
                right_shoes.erase(right_shoes.begin() + i);
                break;
            }
        }
    }
    cout << acc << endl;

    return 0;
}