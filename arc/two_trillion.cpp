#include <iostream>
#include <vector>
using namespace std;

int main(){
    long a, k;
    cin >> a >> k;

    long money_counter=a;
    long day_counter=0;
    if (k == 0){
       cout << 2000000000000 - a << endl; 
    } else {
    while(money_counter < 2000000000000){
        money_counter += 1 + k * money_counter;
        ++day_counter;
    }
    cout << day_counter <<endl;
    }
    return 0;
}