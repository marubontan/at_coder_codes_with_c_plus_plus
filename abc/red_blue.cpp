#include <iostream>
using namespace std;

int main(){
    int n, x;
    cin>>n>>x;
    
    int l = x - 1;
    int r = n - x;
    if (l > r) cout<<r<<endl;
    else cout<<l<<endl;
}
