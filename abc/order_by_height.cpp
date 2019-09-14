#include <algorithm>
#include <iostream>
#include <tuple>
#include <vector>
using namespace std;

bool key(tuple<int, long long> first, tuple<int, long long> second){
    return get<1>(first) > get<1>(second);
}

int main(){
    int n; cin>>n;
    vector<tuple<int, long long>> students(n);
    long long temp;
    for (int i=0;i<n;i++){
        cin >> temp;
        students[i] = make_tuple(i+1, temp);
    }

    sort(students.begin(), students.end(), key);

    for (auto p : students){
        cout << get<0>(p) << endl;
    }
    return 0;
}