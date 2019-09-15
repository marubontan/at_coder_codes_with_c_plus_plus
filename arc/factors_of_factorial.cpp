#include <iostream>
#include <map>
using namespace std;


int main(){
    int n; cin>>n;
    if (n == 1){
        cout << 1 << endl;
        return 0;
    }
    map<int, long long> counter;
    for (int i=1;i<=n;i++){
        int num = i;
        for (int j=2;j<=i;j++){
            while (num % j == 0){
                counter[j]++;
                num /= j;
            }
        }
    }
    long long divisors_num = 1;
    for (auto item : counter){
        divisors_num *= item.second + 1;
        divisors_num %= 1000000007;
    }
    cout << divisors_num << endl;
    return 0;

}