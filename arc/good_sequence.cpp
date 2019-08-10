#include <iostream>
#include <map>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;

    map<int, int> counter;
    int temp;
    for (int i=0;i<n;i++){
        cin >> temp;
        ++counter[temp];
    }

    int delete_target_number = 0;
    for (auto &item : counter){
        if (item.first == item.second){
            continue;
        } else {
            if (item.first < item.second){
                delete_target_number += item.second - item.first;
            } else {
                delete_target_number += item.second;
            }
        }

    }
    cout << delete_target_number << endl;
    return 0;
}