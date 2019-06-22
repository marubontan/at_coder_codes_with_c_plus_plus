#include <iostream>
#include <set>
using namespace std;

int main(){
    int n, a, b, k;
    cin>>n>>a>>b>>k;
    int p[k+2];
    for (int i=0;i<k;i++) cin>>p[i];
    p[k] = a;
    p[k+1] = b;
    set<int> unique_p;
    for (int i=0;i<k+2;i++){
        unique_p.insert(p[i]);
    }
    if(sizeof(p)/sizeof(p[0])==unique_p.size()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}