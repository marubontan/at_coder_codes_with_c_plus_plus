#include <iostream>
#include <vector>
using namespace std;

bool dfs(int i, long long acc, vector<long long> numbers, int n, long long k){
    if (i == n){
        return acc == k;
    }

    if (dfs(i+1, acc+numbers[i], numbers, n, k)){
        return true;
    }
    if (dfs(i+1, acc, numbers, n, k)){
        return true;
    }
    return false;

}

int main(){
    int n; cin >> n;
    vector<long long> numbers(n); for (int i=0;i<n;i++){cin>>numbers[i];}
    long long k; cin >> k;

    if (dfs(0, 0, numbers, n, k)){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}