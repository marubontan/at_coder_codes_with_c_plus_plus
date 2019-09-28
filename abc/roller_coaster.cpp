#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,k;cin>>n>>k;
    vector<int> heights(n);for(int i=0;i<n;i++){cin>>heights[i];}

    int acc = 0;
    for (auto h: heights){
        if (h >= k){
            acc++;
        }
    }
    cout << acc << endl;
    return 0;
}