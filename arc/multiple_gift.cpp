#include <iostream>
using namespace std;

int main(){
    long x, y;
    cin >> x >> y;
    int sequence_length = 0;
    long value = x;
    while (value <= y){
        ++sequence_length;
        value *= 2;
    }
    cout << sequence_length << endl;
    return 0;
}