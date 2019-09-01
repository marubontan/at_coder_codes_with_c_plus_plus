#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> ingredients(n); for (int i=0;i<n;i++){cin >> ingredients[i];};
    sort(ingredients.begin(), ingredients.end());
    double m = ingredients[0];
    for (int i=1;i<n;i++){
        m = (m + ingredients[i]) / 2.0;
    }
    cout << m << endl;
}
