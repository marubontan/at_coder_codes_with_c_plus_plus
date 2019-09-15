#include <iostream>
#include <map>
#include <vector>
using namespace std;

map<long long, long long> counter(vector<long long> a){
    map<long long, long long> freq;
    for (auto i : a){
        freq[i]+=1;
    }
    return freq;
}

int main(){
    long long n, k, q; cin >>n>>k>>q;
    vector<long long> answers(q); for(long long i=0;i<q;i++){cin>>answers[i];}

    auto answer_freq = counter(answers);

    long long border = (q - k) + 1;
    for (long long i=1;i<n+1;i++){
        if (answer_freq[i] >= border){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}