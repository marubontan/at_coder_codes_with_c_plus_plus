#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<long long> locations(n);
    for (int i=0;i<n;i++){
        cin >> locations[i];
    }
    long long smallest_time;
    long long smaller_time;
    long long left_first, right_first;
    long long leftest, rightest;
    for (int i=0;i<=n-k;i++){
        leftest = locations[i];
        rightest = locations[i+k-1];
        left_first = abs(leftest) + abs(rightest - leftest);
        right_first = abs(rightest) + abs(rightest - leftest);
        smaller_time = min(left_first, right_first);
        if (i == 0){
            smallest_time = smaller_time;
        } else {
            if (smallest_time > smaller_time){
                smallest_time = smaller_time;
            }
        }
    }
    cout << smallest_time << endl;
    return 0;
}