#include <iostream>
using namespace std;

int main(){
    int n,a,b;
    cin>>n>>a>>b;

    int total = 0;
    for(int i=1;i<=n;i++){
        string s = to_string(i);
        int s_sum = 0;
        for(int j=0;j<s.length();j++){
            s_sum += (int)s[j] - 48;
        }
        if (a <= s_sum && s_sum <= b){
            total += stoi(s);
        }
    }
    cout<<total<<endl;
}
