#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int counter = 0;
    for (int i=1;i<=6;i++){
        for (int j=1;j<=9;j++){
            counter++;
            if (counter == n){
                for (int k=0;k<i;k++){
                    cout << j;
                }
                cout << endl;
                break;
            }
        }
    }
}