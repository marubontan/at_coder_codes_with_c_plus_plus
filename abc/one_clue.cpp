#include <iostream>
using namespace std;

int main(){
    int k, x;
    cin >> k >> x;
    int min_num = x - (k - 1);
    int max_num = x + (k - 1);
    for (int i=min_num;i<=max_num;i++){
        if (-1000000 <= i && i <= 1000000 ){
            if (i == 1000000 || i == max_num){
                cout << i << endl;
            }else{
                cout << i << ' ';
            }
        }
    }
    
}