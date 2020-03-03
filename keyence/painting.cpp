#include <iostream>
using namespace std;

int main(){
    int h,w,n;
    cin>>h;
    cin>>w;
    cin>>n;

    int bigger_value = max(h, w);
    if (n % bigger_value == 0){
        cout << n / bigger_value << endl;
    } else {
        cout << n / bigger_value + 1 << endl;
    }
    return 0;

}