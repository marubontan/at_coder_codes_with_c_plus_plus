#include <iostream>
using namespace std;

int main(){
    int m;cin>>m;
    float k = m / 1000.0;
    if (k < 0.1){
        cout << "00" << endl;
    } else if (k <= 5){
        int temp = int(k * 10);
        if (temp < 10){
            cout << "0" << to_string(temp) << endl;
        } else {
            cout << temp << endl;
        }
    } else if (k <= 30){
        cout << k + 50 << endl;
    } else if (k <= 70){
        cout << (k - 30) / 5 + 80 << endl;
    } else {
        cout << 89 << endl;
    }
    return 0;
}