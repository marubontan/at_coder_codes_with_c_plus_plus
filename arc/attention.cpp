#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    cin >> s;

    vector<int> west_attention_from_left(n);
    vector<int> east_attention_from_right(n);

    for (int i=0;i<n;i++){
        if (i==0){
            if (s[i] == 'W'){
                west_attention_from_left[i] = 1;
            } else {
                west_attention_from_left[i] = 0;
            }
        } else {
            if (s[i] == 'W'){
                west_attention_from_left[i] = west_attention_from_left[i-1] + 1;
            }else {
                west_attention_from_left[i] = west_attention_from_left[i-1];
            }
        }
    }
    reverse(s.begin(), s.end());

    for (int i=0;i<n;i++){
        if (i==0){
            if (s[i] == 'E'){
                east_attention_from_right[i] = 1;
            } else {
                east_attention_from_right[i] = 0;
            }
        } else {
            if (s[i] == 'E'){
                east_attention_from_right[i] = east_attention_from_right[i-1] + 1;
            }else {
                east_attention_from_right[i] = east_attention_from_right[i-1];
            }
        }
    }

    vector<int> change_direction_number(n);
    for (int i=0;i<n;i++){
        if (i == 0){
            change_direction_number[i] = east_attention_from_right[n - 2];
        } else if (i == n - 1){
            change_direction_number[i] = west_attention_from_left[n - 2];
        } else {
            change_direction_number[i] = west_attention_from_left[i-1] + east_attention_from_right[n - i - 2];
        }
    }
    cout << *min_element(change_direction_number.begin(), change_direction_number.end()) << endl;
    return 0;
}


