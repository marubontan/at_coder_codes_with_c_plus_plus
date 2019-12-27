#include <iostream>
using namespace std;

int main(){
    int x, y;cin>>x>>y;
    int acc = 0;
    if (x == 1){
        acc += 300000;
    } else if (x == 2){
        acc += 200000;
    } else if (x == 3){
        acc += 100000;
    }

    if (y == 1){
        acc += 300000;
    } else if (y == 2){
        acc += 200000;
    } else if (y == 3){
        acc += 100000;
    }

    if (x == 1 && y == 1){
        acc += 400000;
    }
    cout << acc << endl;
    return 0;
}