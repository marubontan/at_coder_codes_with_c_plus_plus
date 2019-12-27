#include <iostream>
using namespace std;

int main(){
    int n,a,b;cin>>n>>a>>b;
    int min_a_b = min(a,b);
    cout << min_a_b << " " << max(0, (a + b) - n) << endl;
    return 0;
}