#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int acc = 0;
    for (int i=1;i<=n;i++){
        if(to_string(i).size() % 2 == 1){
            acc++;
        }
    }
    cout << acc << endl;
    return 0;
}