#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string success = "No";
    for (int i=0;i<=n/7;i++){
        if ((n - 7 * i) % 4 == 0){
            success = "Yes";
            break;
        }
    }
    cout<<success<<endl;
    return 0;
}
