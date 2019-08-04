#include <iostream>
using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;

    int train = n * a;
    if (train > b){
        cout << b << endl;
    } else {
        cout << train << endl;
    }
    return 0;
}
