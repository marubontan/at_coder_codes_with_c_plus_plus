#include <iostream>
using namespace std;

int main(){
    int price;cin>>price;
    if (price % 1000 == 0){
        cout << 0 << endl;
    } else {
        cout << 1000 - (price % 1000) << endl;
    }
    return 0;
}