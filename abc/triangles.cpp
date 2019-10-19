#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> bars(n);for(int i=0;i<n;i++){cin>>bars[i];}

    sort(bars.begin(), bars.end(), greater<int>());

    int acc = 0;
    for (int i=0;i<n-2;i++){
        for (int j=i+1;j<n-1;j++){
            if (bars[i] > 2 * bars[j]){
                continue;
            } else {
                for (int k=j+1;k<n;k++){
                    if (bars[i] < bars[j] + bars[k]){
                        acc++;
                    }
                }
            }
        }
    }
    cout << acc << endl;
    return 0;
    
}