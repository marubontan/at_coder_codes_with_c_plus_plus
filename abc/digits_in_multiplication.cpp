#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<long> make_divisors(long n){
    vector<long> divisors;
    for (long i=1;i<sqrt(n)+1;i++){
        if (n % i == 0){
            divisors.push_back(i);
        }
    }
    return divisors;
}

int main(){
    long n;
    cin >> n;
    auto divisors = make_divisors(n);

    int minimum_length = 10;
    for (auto d : divisors){
        int digits_size = to_string(max(d, n / d)).size();
        if (digits_size < minimum_length){
            minimum_length = digits_size;
        }
    }    
    cout << minimum_length << endl;
    return 0;
}