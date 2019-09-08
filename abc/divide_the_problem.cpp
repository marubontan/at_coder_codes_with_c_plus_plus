#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> problems(n);for(int i=0;i<n;i++){cin>>problems[i];}

    sort(problems.begin(), problems.end());

    int l_last = problems[n / 2 - 1];
    int r_first = problems[n / 2];
    cout << r_first - l_last << endl;
    return 0;
}