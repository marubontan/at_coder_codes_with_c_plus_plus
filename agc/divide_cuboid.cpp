#include <iostream>
using namespace std;

int main(){
    long long a, b, c;cin>>a>>b>>c;
    long long area_1 = a * b;
    long long area_2 = b * c;
    long long area_3 = a * c;

    if (area_1 <= area_2 && area_1 <= area_3){
        if (c % 2 == 0){
            cout << 0 << endl;
            return 0;
        } else {
            cout << area_1 << endl;
            return 0;
        }
    } else if (area_2 <= area_1 && area_2 <= area_3){
        if (a % 2 == 0){
            cout << 0 << endl;
            return 0;
        } else {
            cout << area_2 << endl;
            return 0;
        }
    } else {
        if (b % 2 == 0){
            cout << 0 << endl;
        } else {
            cout << area_3 << endl;
            return 0;
        }
    }
}