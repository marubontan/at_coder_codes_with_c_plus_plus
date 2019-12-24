#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;cin>>n;
    vector<long long> a(n);
    vector<long long> b(n);
    long long a_acc = 0;
    long long b_acc = 0;
    for (int i=0;i<n;i++){
        cin >> a[i];
        a_acc += a[i];
    }
    for (int i=0;i<n;i++){
        cin >> b[i];
        b_acc += b[i];
    }

    if (a_acc < b_acc){
        cout << -1 << endl;
        return 0;
    }

    vector<int> over;
    int less_num = 0;
    int less_acc = 0;
    for (int i=0;i<n;i++){
        if (a[i] >= b[i]){
            over.push_back(a[i] - b[i]);
        } else {
            less_num++;
            less_acc += b[i] - a[i];
        }
    }
    sort(over.begin(), over.end(), greater<int>());
    int over_num = 0;
    for (int i=0;i<over.size();i++){
        if (less_acc <= 0){
            break;
        }
        less_acc -= over[i];
        over_num++;
    }
    cout << less_num + over_num << endl;
    return 0;

}