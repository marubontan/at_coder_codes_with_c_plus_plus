#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, t; cin >> n >> t;
    vector<long long> doors(n); for(int i=0;i<n;i++){cin >> doors[i];};

    long long acc = 0;
    long long diff;
    for (int i=0;i<n-1;i++){
        diff = doors[i+1] - doors[i];
        if (diff < t){
            acc += diff;
        } else {
            acc += t;
        }
    }
    acc += t;
    cout << acc << endl;
    return 0;
}