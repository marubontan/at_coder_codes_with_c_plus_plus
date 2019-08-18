#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<double> numbers(n);
    for (int i=0;i<n;i++){
        cin >> numbers[i];
    }
    double divisor=0.0;
    for (auto &i : numbers){
        divisor += (1.0 / i);
    }
    cout << setprecision(10) << 1.0 / divisor << endl;
    return 0;
}