#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a,b;
    cin >> a;
    cin >> b;
    vector<int> used{a, b};
    vector<int> all{1, 2, 3};
    for (auto i : all){
        if (find(used.begin(), used.end(), i) == used.end()){
            cout << i << endl;
            return 0;
        }
    }
    

    
}