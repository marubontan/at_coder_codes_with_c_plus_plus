#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,k;
    cin >> n;
    cin >> k;
    vector <int> coordinates(n); for (int i=0;i<n;i++){cin>>coordinates[i];}

    int acc = 0;
    for (auto c : coordinates){
        acc += 2 * min(c, abs(c - k));
    }
    cout << acc << endl;
    return 0;
}