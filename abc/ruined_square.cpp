#include <iostream>
using namespace std;

int main(){
    int a, b, c, d;cin>>a>>b>>c>>d;
    cout << c - (d - b) << " " << d + (c - a) << " " << a - (d - b) << " " << b + (c - a) << endl;
}