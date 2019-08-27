#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int set = 100 * (n / 10);
    int more = n % 10;
    if (15 * more < 100){
        cout << set + 15 * more << endl;
    } else {
        cout << set + 100 << endl;
    }

}