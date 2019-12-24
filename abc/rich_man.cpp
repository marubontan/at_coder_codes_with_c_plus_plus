#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> foods(n);for (int i=0;i<n;i++){cin>>foods[i];}
    sort(foods.begin(), foods.end(), greater<int>());

    int biggest = foods[0];
    for (auto food: foods){
        if (food != biggest){
            cout << food << endl;
            break;
        }
    }
    return 0;
}