#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;cin>>n;
    map<int, int> friends;
    for (int i=0;i<n;i++){
        int target;cin>>target;
        friends[i+1] = target;
    }

    int acc = 0;
    for (auto like: friends){
        if (like.first == friends[like.second]){
            acc++;
        }
    }
    cout << acc / 2 << endl;
    return 0;
}