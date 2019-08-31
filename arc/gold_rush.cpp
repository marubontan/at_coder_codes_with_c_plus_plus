#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> desert(7); for (int i=0;i<7;i++){cin >> desert[i];};
    vector<int> jungle(7); for (int i=0;i<7;i++){cin >> jungle[i];};

    int acc = 0;
    for (int i=0;i<7;i++){
        acc += max(desert[i], jungle[i]);
    }
    cout << acc << endl;
    return 0;
}