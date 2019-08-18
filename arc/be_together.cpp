#include <cmath>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i=0;i<n;i++){
        cin >> numbers[i];
    }
    int objective = round(accumulate(numbers.begin(), numbers.end(), 0) / static_cast<float>(n));

    int acc = 0;
    for (auto &i : numbers){
        acc += pow(i - objective, 2.0);
    }
    cout << acc << endl;
    return 0;
}