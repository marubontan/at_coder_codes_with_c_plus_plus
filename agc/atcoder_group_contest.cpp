#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;cin>>n;
    vector<unsigned long long> participants(3*n);for (int i=0;i<3*n;i++){cin>>participants[i];}

    sort(participants.begin(), participants.end(), greater<int>());

    unsigned long long acc = 0;
    for (int i=1;i<2 * n;i += 2){
        acc += participants[i];
    }
    cout << acc << endl;
    return 0;
}