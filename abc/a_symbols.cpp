#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    vector<int> ab {a + b, a - b, a * b};
    cout << *max_element(ab.begin(), ab.end()) << endl;
}