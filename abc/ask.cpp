#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int x_1, y_1, x_2, y_2, x_3, y_3;cin>>x_1>>y_1>>x_2>>y_2>>x_3>>y_3;
    cout << setprecision(10) << 0.5 * abs((x_1 - x_3)*(y_2 - y_3) - (x_2 - x_3)*(y_1 - y_3)) << endl;
    return 0;
}