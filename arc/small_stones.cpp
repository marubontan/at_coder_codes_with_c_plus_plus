#include <iostream>
using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    int last_turn_stones = n % (a + b);
    if (last_turn_stones == 0){
        cout << "Bug" << endl;
    } else if(last_turn_stones <= a){
        cout << "Ant" << endl;
    } else {
        cout << "Bug" << endl;
    }
    return 0;
}