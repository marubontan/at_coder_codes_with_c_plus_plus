#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long n;cin>>n;
    vector<long long> players(n);for(int i=0;i<n;i++){cin>>players[i];};
    sort(players.begin(), players.end(), greater<long long>());
    if (n == 2){
        cout << players[0] << endl;
    } else {
        long long num = n - 2;
        long long acc = players[0];
        for (int i=1;i<=(num/2);i++){
            acc += (2 * players[i]);
        }
        if (num % 2 == 1){
            acc += players[num / 2 + 1];
        }
        cout << acc << endl;
    }
    return 0;
}