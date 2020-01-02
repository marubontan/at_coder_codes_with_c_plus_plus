#include <iostream>
using namespace std;

int main(){
    long long x, y;cin>>x>>y;
    if (abs(x) < abs(y)){
        if (0 <= x && x <= y){
            cout << y - x << endl;
        } else if (0 <= x && y <= 0){
            cout << abs(y) - x + 1 << endl;
        } else if (x <= 0 && 0 <= y){
            cout << y - abs(x) + 1 << endl;
        } else {
            cout << abs(y) - abs(x) + 2 << endl;
        }
    } else {
        if (0 <= x && 0 < y){
            cout << (-y) - (-x) + 2 << endl;
        } else if (0 <= x && y <= 0) {
            cout << y - (-x) + 1 << endl;
        } else if (x <= 0 && 0 < y){
            cout << (-y) - x + 1 << endl;
        } else {
            cout << y - x << endl;
        }
    }
    return 0;
}