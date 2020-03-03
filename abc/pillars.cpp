#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> pillars(n);for(int i=0;i<n;i++){cin >> pillars[i];}

    if (n == 2){
        cout << abs(pillars[1] - pillars[0]) << endl;
        return 0;
    }
    vector<int> cost(n);
    cost[0] = 0;
    cost[1] = abs(pillars[1] - pillars[0]);
    for (int i=2;i<n;i++){
        cost[i] = min(cost[i-2] + abs(pillars[i] - pillars[i-2]), cost[i-1] + abs(pillars[i] - pillars[i-1]));
    }
    cout << cost[n-1] << endl;
    return 0;
}