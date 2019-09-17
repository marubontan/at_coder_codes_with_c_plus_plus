#include <iostream>
using namespace std;

int main(){
    float height, bmi; cin >> height >> bmi;
    cout << bmi * ((height / 100.0) * (height / 100.0)) << endl;
}