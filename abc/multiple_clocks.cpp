#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

long long gcd(long long a, long long b)
{
    for (;;)
    {
        if (a == 0) return b;
        b %= a;
        if (b == 0) return a;
        a %= b;
    }
}

long long lcm(long long a, long long b)
{
    long long temp = gcd(a, b);

    return temp ? (a / temp * b) : 0;
}

int main(){
    long long n;cin>>n;

    long long nums[n];for (int i=0;i<n;i++){cin>> nums[i];}

    long long acc = 1;
    for (int i=0;i<n;i++){
        acc = lcm(acc, nums[i]);

    }

    cout << acc << endl;
    return 0;
}