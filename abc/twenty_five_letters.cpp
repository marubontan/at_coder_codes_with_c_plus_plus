#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;

    cin>>s>>n;
    cout << s[(n - 1) / 5]<<s[(n+4)%5]<<endl;
}
