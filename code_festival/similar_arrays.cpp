#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> sequence(n);for(int i=0;i<n;i++){cin>>sequence[i];}
    int acc = 0;
    for (auto s : sequence){
        if (s % 2 == 0){
            acc++;
        }
    }
    cout << pow(3.0, n) - pow(2.0, acc) << endl;
    return 0;

}