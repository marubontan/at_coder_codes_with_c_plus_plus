#include <iostream>
using namespace std;

int main(){
    int a, b;cin>>a>>b;

    int max_val_a;

    // maximize a
    if (a / 100 != 9){
        max_val_a = 900 + (a % 100);
    } else if ((a % 100) / 10 != 9){
        max_val_a = 100 * (a / 100) + 90 + a % 10;
    } else {
        max_val_a = 10 * (a / 10) + 9;
    }

    int min_val_b;

    if (b / 100 != 1){
        min_val_b = 100 + b % 100;
    } else if ((b % 100) >= 10){
        min_val_b = 100 * (b / 100) + (b % 10);
    } else {
        min_val_b = (b / 10) * 10;
    }

    cout << max(max_val_a - b, a - min_val_b) <<endl;
    return 0;
}