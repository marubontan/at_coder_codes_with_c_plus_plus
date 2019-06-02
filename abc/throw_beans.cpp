#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    int ra, rb, rc;
    if (a>b&&b>c) {ra=1;rb=2;rc=3;}
    else if (a>c&&c>b){ra=1;rb=3;rc=2;}
    else if (b>a&&a>c){ra=2;rb=1;rc=3;}
    else if (b>c&&c>a){ra=3;rb=1;rc=2;}
    else if (c>a&&a>b){ra=2;rb=3;rc=1;}
    else {ra=3;rb=2;rc=1;}
    cout<<ra<<endl;
    cout<<rb<<endl;
    cout<<rc<<endl;
}