#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    long long n;cin>>n;
    vector<pair<long long, long long>> tasks(n);
    long long a,b;
    for (long long i=0;i<n;i++){
        cin >> a >> b;
        tasks[i] = make_pair(b, a);
    }

    sort(tasks.begin(), tasks.end());

    long long acc = 0;
    bool judge = true;
    for (auto task : tasks){
        acc += task.second;
        if (acc > task.first){
            judge = false;
            break;
        }
    }
    if (judge){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}