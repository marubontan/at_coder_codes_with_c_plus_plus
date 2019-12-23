#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long a, b, c;cin>>a>>b>>c;
    vector<long long> cookies{a, b, c};
    long long acc = 0;

    while (true){
        vector<long long> temp(3);
        temp[0] = cookies[1] / 2 + cookies[2] / 2;
        temp[1] = cookies[0] / 2 + cookies[2] / 2;
        temp[2] = cookies[0] / 2 + cookies[1] / 2;
        cookies = temp;
        acc++;

        if (a == cookies[0] && b == cookies[1] && c == cookies[2]){
            cout << -1 << endl;
            break;
        }
        if (cookies[0] % 2 == 1 || cookies[1] % 2 == 1 || cookies[2] % 2 == 1){
            cout << acc << endl;
            break;
        }
    }
    return 0;

}