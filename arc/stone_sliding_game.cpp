#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int abs_a, abs_b;
    abs_a = abs(a);
    abs_b = abs(b);
    if (abs_a == abs_b){
        cout << "Draw" << endl;
    } else if (abs_a < abs_b){
        cout << "Ant" << endl;
    } else {
        cout << "Bug" << endl;
    }
}