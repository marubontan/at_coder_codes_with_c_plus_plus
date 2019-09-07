#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> a(n); for(int i=0;i<n;i++){cin>>a[i];}
    map<int, int> b; for(int i=0;i<n;i++){cin>>b[i];}
    map<int, int> c; for(int i=0;i<n-1;i++){cin>>c[i];}

    int satisfaction = 0;
    int latest_index = 0;
    for (auto a_i : a){
        satisfaction += b[a_i-1];
        if (latest_index+1 == a_i){
            satisfaction += c[latest_index-1];
        }
        latest_index = a_i;
    }
    cout << satisfaction << endl;
    return 0;
}