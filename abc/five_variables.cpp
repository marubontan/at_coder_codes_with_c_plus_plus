#include <iostream>
using namespace std;

int main(){
    int temp;
    for (int i=0;i<5;i++){
        cin >> temp;
        if (temp == 0){
            cout << i + 1 << endl;
        } 
    }
    return 0;

}