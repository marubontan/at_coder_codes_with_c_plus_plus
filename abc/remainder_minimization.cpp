#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long l,r;cin>>l>>r;

    vector<long long> targets;
    long long acc = 0;
    bool judge = false;
    for (long long i=l;i<r;i++){
        for (long long j=i+1;j<=r;j++){
            targets.push_back(((i % 2019) * (j % 2019)) % 2019);
            acc++;
            if (acc > 5000){
                judge = true;
                break;
            }
        }
        if (judge){
            break;
        }
    }
    sort(targets.begin(), targets.end());
    cout << targets[0] << endl;
    return 0;

}