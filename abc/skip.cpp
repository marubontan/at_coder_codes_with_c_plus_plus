#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

long long gcd(long long a, long long b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

long long findGCD(vector<long long> arr, long long n) 
{ 
    long long result = arr[0]; 
    for (long long i = 1; i < n; i++) 
        result = gcd(arr[i], result); 
  
    return result; 
} 
int main(){
    long long n, x; cin>>n>>x;
    vector<long long> cities(n+1); for (int i=0;i<n;i++){cin>>cities[i];};
    cities[n] = x;
    sort(cities.begin(), cities.end());

    vector<long long> diff(n);
    for (long long i=0;i<n;i++){
        diff[i] = cities[i+1] - cities[i];
    }
    cout << findGCD(diff, n) << endl;
    return 0;
}