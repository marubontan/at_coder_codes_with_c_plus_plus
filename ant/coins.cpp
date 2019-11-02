#include <iostream>
using namespace std;

int main(){
    long long c_1, c_5, c_10, c_50, c_100, c_500, a; cin >> c_1 >> c_5 >> c_10 >> c_50 >> c_100 >> c_500 >> a;

    long long acc = 0;
    if (a > c_500 * 500){
        acc += c_500;
        a -= c_500 * 500;
    } else {
        acc += a / 500;
        a %= 500;
    }
    if (a > c_100 * 100){
        acc += c_100;
        a -= c_100 * 100;
    } else {
        acc += a / 100;
        a %= 100;
    }
    if (a > c_50 * 50){
        acc += c_50;
        a -= c_50 * 50;
    } else {
        acc += a / 50;
        a %= 50;
    }
    if (a > c_10 * 10){
        acc += c_10;
        a -= c_10 * 10;
    } else {
        acc += a / 10;
        a %= 10;
    }
    if (a > c_5 * 5){
        acc += c_5;
        a -= c_5 * 5;
    } else {
        acc += a / 5;
        a %= 5;
    }
    acc += a;
    cout << acc << endl;
    return 0;
}