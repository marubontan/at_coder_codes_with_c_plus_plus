#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k;cin>>n>>k;
    vector<char> dislike(k); for (int i=0;i<k;i++){cin>>dislike[i];}
    for (int i=n;true;i++){
        string num_string = to_string(i);
        if (find_first_of(num_string.begin(), num_string.end(), dislike.begin(), dislike.end()) == num_string.end()){
            cout << i << endl;
            break;
        }
    }
    return 0;
}
