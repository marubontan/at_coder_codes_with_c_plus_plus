#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main(){
    int n;cin>>n;
    vector<long long> sequence(n);for (int i=0;i<n;i++){cin>>sequence[i];}
    list<long long> output;
    for(int i=0;i<n;i++){
        if (i%2==0){
            if (n%2==0){
                output.push_back(sequence[i]);
            } else {
                output.push_front(sequence[i]);
            }
        } else {
            if (n%2==0){
                output.push_front(sequence[i]);
            } else {
                output.push_back(sequence[i]);
            }
        }
    }
    for (auto a: output){
        cout << a << " ";
    }

    return 0;
}
