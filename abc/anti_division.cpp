#include <iostream>
#include <numeric>
using namespace std;
long long gcd(long long a, long long b) { 
   if (b == 0) 
      return a; 
   return gcd(b, a % b);  
} 

long long lcm(long long number1,long long number2){
	return number1 * number2 / gcd(number1,number2);	
}
int main(){
    long long a, b, c, d; cin >>a>>b>>c>>d;
    auto lcm_num = lcm(c, d);
    cout << (b - (a-1)) - (((b / c) - ((a - 1)/c)) + ((b / d) - ((a-1)/d)) - ((b/lcm_num) - ((a-1)/lcm_num)))<<endl;
    return 0;
}