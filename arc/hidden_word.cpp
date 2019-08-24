#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    long acc = 0; 
    while (n) {
        acc += n;
        n--;
    }
    cout << acc << endl;
    return 0;
}