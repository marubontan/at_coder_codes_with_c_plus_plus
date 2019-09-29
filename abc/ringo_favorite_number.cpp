#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int d, n;
    cin >> d >> n;
    int count = 0;
    int num = 1;
    while (true){
        int temp_d = d;
        int temp_num = num;
        while (true){
            if (temp_num % 100 != 0){
                break;
            } else {
                temp_num /= 100;
                temp_d--;
            }
        }
        if (temp_d == 0){
            count++;
        }
        if (count == n){
            break;
        }
        num++;
    }
    cout << num << endl;
    return 0;
}