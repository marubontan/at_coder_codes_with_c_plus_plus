#include <iostream>
using namespace std;

int main(){
    int n, y;cin>>n>>y;
    for (int i=0;i<=n;i++){
        int temp_1 = y - 10000 * i;
        for (int j=0;j<=n-i;j++){
            int temp_2 = temp_1 - 5000 * j;
            if (1000 * (n-i-j) == temp_2){
                cout << i << " " << j << " " << n-i-j << endl;
                return 0;
            }

        }
    }
    cout << "-1 -1 -1" << endl;
    return 0;

}