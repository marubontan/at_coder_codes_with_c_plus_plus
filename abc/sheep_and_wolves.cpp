#include <iostream>
using namespace std;

int main(){
    long long s, w; cin >> s >> w;
    if (s <= w){
        cout << "unsafe" << endl;
    } else {
        cout << "safe" << endl;
    }
    return 0;
}