#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    string acc = "No";
    for (int i=1;i<=9;i++){
        if (n % i == 0){
            int d = n / i;
            if (1 <= d && d <= 9){
                acc = "Yes";
            }
        }
    }
    cout << acc << endl;
    return 0;
}