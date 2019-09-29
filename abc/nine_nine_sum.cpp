#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int nine_nine_sum = 0;
    for (int i=1;i<10;i++){
        for (int j=1;j<10;j++){
            nine_nine_sum += i * j;
        }
    }
    int diff = nine_nine_sum - n;
    for (int i=1;i<10;i++){
        if (diff % i == 0 && diff / i < 10){
            cout << i << " x " << diff / i << endl;
        }
    }

}