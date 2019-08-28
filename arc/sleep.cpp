#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> sleep_time(n);
    for (int i=0;i<n;i++){
        cin >> sleep_time[i];
    }

    for (int i=0;i<n-2;i++){
        if (sleep_time[i] + sleep_time[i+1] + sleep_time[i+2] < k){
            cout << i + 2 + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}