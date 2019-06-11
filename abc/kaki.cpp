#include <iostream>
using namespace std;

int main(){
    int n = 12;
    string s[n];
    for (int i=0;i<n;i++) cin>>s[i];
    int r_contained_number = 0;
    for (int i=0;i<n;i++){
        if (s[i].find('r') != string::npos) r_contained_number++; 
    }
    cout<<r_contained_number<<endl;
    return 0;
}
