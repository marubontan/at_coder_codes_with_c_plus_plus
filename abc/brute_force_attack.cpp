#include <iostream>
using namespace std;

void rec(int n, string acc){
    if (n == 0){
        cout << acc << endl;
        return;
    }
    rec(n-1, acc+"a");
    rec(n-1, acc+"b");
    rec(n-1, acc+"c");
}

int main(){
    int n;cin>>n;
    rec(n, "");
    return 0;
}