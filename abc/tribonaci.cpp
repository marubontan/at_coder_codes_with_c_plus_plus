#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if (n < 3){
        cout << 0 << endl;
    } else if(n == 3){
        cout << 1 << endl;
    } else {
        unsigned long prev_1 = 0;
        unsigned long prev_2 = 0;
        unsigned long prev_3 = 1;
        unsigned long latest;
        for (int i=3;i<n;i++){
            latest = prev_1 + prev_2 + prev_3;
            prev_1 = prev_2 % 10007;
            prev_2 = prev_3 % 10007;
            prev_3 = latest % 10007; 
        }
        cout << latest % 10007 << endl;

    }
    return 0;
}