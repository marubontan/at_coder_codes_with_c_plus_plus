#include <iostream>
#include <math.h>
using namespace std;


bool is_prime(int num)
{
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false;

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main(){
    string n;cin>>n;

    if (n == "1"){
        cout << "Not Prime" << endl;
        return 0;
    }

    if (is_prime(stoi(n))){
        cout << "Prime" <<endl;
        return 0;
    }
    int acc = 0;
    int last_digit;
    for (auto c : n){
        last_digit = c - '0';
        acc += last_digit;
    }
    if (acc % 3 != 0 && last_digit != 5 && last_digit % 2 == 1){
        cout << "Prime" << endl;
        return 0;
    }
    cout << "Not Prime" << endl;
    return 0;
}