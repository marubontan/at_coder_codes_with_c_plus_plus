#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
    long long n;cin>>n;
    vector<int> init{1, 2, 3, 4, 5, 6};
    vector<int> temp = init;
    map<long long, vector<int>> hist;
    hist[0] = init;
    long long acc = 0;
    for (long long i=0;i<n;i++){
        int target_index = i % 5;
        int prev = temp[target_index];
        int post = temp[target_index + 1];
        temp[target_index] = post;
        temp[target_index + 1] = prev;

        hist[i + 1] = temp;
        acc++;
        if (temp == init){
            break;
        }
    }
    if (acc == n){
        for (auto s:hist[acc]){
            cout << s;
        }
        cout << endl;
    } else {
        for (auto s:hist[n % acc]){
            cout << s;
        }
        cout << endl;
    }
    return 0;
}