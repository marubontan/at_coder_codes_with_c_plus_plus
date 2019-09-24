#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

unsigned nCk_factorial_formula( unsigned n, unsigned k )
{
    if (k > n) return 0;
    if (k * 2 > n) k = n-k;
    if (k == 0) return 1;

    int result = n;
    for( int i = 2; i <= k; ++i ) {
        result *= (n-i+1);
        result /= i;
    }
    return result;
}

int main(){
    int n, p;cin>>n>>p;
    vector<int> sequence(n);for(int i=0;i<n;i++){cin>>sequence[i];}

    vector<int> even;
    vector<int> odd;
    for (auto i : sequence){
        if (i % 2 == 0){
            even.push_back(i);
        } else {
            odd.push_back(i);
        }
    }
    long long even_side = pow(2, even.size());
    long long odd_side = 0;
    if (p == 0){
        for (int i=0;i<=odd.size();i++){
            if (i % 2 == 0){
                odd_side += nCk_factorial_formula(odd.size(), i);
            }
        }
    } else {
        for (int i=0;i<=odd.size();i++){
            if (i % 2 == 1){
                odd_side += nCk_factorial_formula(odd.size(), i);
            }
        }
    }

    cout << even_side * odd_side <<endl;
    return 0;


}