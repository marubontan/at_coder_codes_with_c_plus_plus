#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;cin>>n;
    string slimes;
    cin >> slimes;

    vector<char> merged_slimes;
    char prev = slimes[0];
    if (n == 1){
        cout << 1 << endl;
        return 0;
    }
    merged_slimes.push_back(prev);
    for (int i=1;i<n;i++){
        if (slimes[i] != prev){
            prev = slimes[i];
            merged_slimes.push_back(prev);
        }
    }
    cout << merged_slimes.size() << endl;
    return 0;
}