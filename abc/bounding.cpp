#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin>>n>>x;
    int l[n];
    for(int i=0;i<n;i++){
        cin>>l[i];
    }
    int num = 1;
    int acc = 0;
    for (int i=0;i<n;i++){
        acc += l[i];
        if(acc > x){
            break;
        }
        num += 1;
    }
    cout<<num<<endl;
    return 0;
}
