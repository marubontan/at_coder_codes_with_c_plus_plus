#include <iostream>
using namespace std;
const long long MAX = 10000000;
const long long MOD = 1000000007;

long long fac[MAX], finv[MAX], inv[MAX];

void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

long long COM(long long n, long long k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main(){
    long long x, y;cin>>x>>y;
    long long line_num=0;
    for (long long i=1;i<=1000000;i++){
        if (x + y == 3 * i){
            line_num = i;
        }
    }
    if (line_num == 0){
        cout << 0 << endl;
        return 0;
    }

    long long start_x = line_num;
    long long end_x = start_x + line_num;
    long long start_y = line_num;
    long long end_y = start_y + line_num;
    if (!(start_x <= x && x <= end_x && start_y <= y && y<= end_y)){
        cout << 0 << endl;
        return 0;
    }

    COMinit();

    if (x < y){
        cout << COM(line_num, end_y - y) << endl;
    } else {
        cout << COM(line_num, end_x - x) << endl;
    }
    return 0;
    
}