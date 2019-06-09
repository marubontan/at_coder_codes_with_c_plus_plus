#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int w[n];
    int sum = 0;
    for (int i=0;i<n;i++) {
        cin>>w[i];
        sum += w[i];
        }
    
    int abs_min = sum + 1;
    for (int i=0;i<n;i++){
        int lsum = 0;
        for (int j=0; j<=i; j++){
            lsum += w[j];
        }
        int rl_abs_min = abs((sum - lsum) - lsum);
        if (abs_min > rl_abs_min){
            abs_min = rl_abs_min;
        }
    }
    cout<<abs_min<<endl;
    return 0;
}
