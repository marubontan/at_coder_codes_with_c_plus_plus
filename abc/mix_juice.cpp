#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,k;cin>>n>>k;
    vector<int> price(n);
    for (int i=0;i<n;i++){
        cin >> price[i];
    }

    sort(price.begin(), price.end());
    int acc = 0;
    for (int i=0;i<k;i++){
        acc += price[i];
    }
    cout << acc << endl;
    return 0;

}