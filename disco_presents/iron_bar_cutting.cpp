#include<iostream>
#include<vector>
using namespace std;

int main(){
    long long n;cin>>n;
    vector<long long> lengths(n);for(int i=0;i<n;i++){cin>>lengths[i];}
    vector<long long> reducted;
    long long acc=0;
    for (auto l : lengths){
        acc+=l;
        reducted.push_back(acc);
    }
    long long half = acc / 2;

    long long range_1;
    long long range_2;
    long long target;
    bool flag = true;
    acc = 0;
    for (auto l : lengths){
        acc += l;
        if (flag){
            if (acc > half){
                target = l;
                range_1 = acc - l;
                flag = false;
                acc = 0;
            }
        }
    }
    range_2 = acc;

    long long smaller = min(range_1, range_2);
    long long bigger = max(range_1, range_2);
    cout << smaller + target - bigger << endl;

    return 0;

}