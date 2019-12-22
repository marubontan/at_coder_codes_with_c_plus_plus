#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long n;cin>>n;
    vector<long long> bricks(n+1);for (int i=1;i<n+1;i++){cin>>bricks[i];}

    long long acc, present_index;
    acc = 0;
    present_index = 1;
    for (auto brick: bricks){
        if (brick == present_index){
            present_index++;
        } else {
            acc++;
        }
    }
    if (acc == n+1){
        cout << -1 << endl;
    } else {
        cout << acc - 1 << endl;
    }
    return 0;
}