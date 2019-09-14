#include <iostream>
using namespace std;

int main(){
    int n, a, b; cin >> n >> a >> b;
    string direction;
    int length;
    int temp;
    int acc = 0;
    for(int i=0;i<n;i++){
        cin >> direction >> length;
        if (length < a){
            temp = a;
        } else if(length > b){
            temp = b;
        } else {
            temp = length;
        }
        if (direction == "West"){
            temp *= -1;
        }
        acc += temp;
    }
    if (acc < 0){
        cout << "West" << " " << -acc << endl;
    } else if (acc > 0){
        cout << "East" << " " << acc << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}