#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int v[n], c[n];
    for (int i=0;i<n;i++){
        cin>>v[i];
    }
    for (int i=0;i<n;i++){
        cin>>c[i];
    }

    int ans=0;
    for (int i=0;i<n;i++){
        ans += (v[i] > c[i] > 0) ? v[i] - c[i] : 0;
    }
    cout<<ans;
    return 0;
}
