#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    long long w, h, x, y; cin>>w>>h>>x>>y;
    cout << setprecision(20) << w * h / 2.0 << " ";
    if (w / 2.0 == x && h / 2.0 == y){
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}