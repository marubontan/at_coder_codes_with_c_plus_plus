#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int minimum_acc = 1000000;
    for (int i=1;i<n;i++){
        string left = to_string(i);
        string right = to_string(n - i);
        int acc = 0;
        for (int j=0;j<left.size();j++){
            acc += (int)(left[j]) - (int)48;
        }
        for (int j=0;j<right.size();j++){
            acc += (int)(right[j]) - (int)48;
        }
        if (minimum_acc > acc){
            minimum_acc = acc;
        }
    }
    cout << minimum_acc << endl;
    return 0;
}