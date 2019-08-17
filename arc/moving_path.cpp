#include <iostream>
#include<iomanip>
using namespace std;

int main(){
    long long l, x, y, s, d;
    cin >> l >> x >> y >> s >> d;

    long long clock_route;
    if (d >= s){
        clock_route = d - s;
    } else {
        clock_route = (l - s) + d;
    }
    long long reverse_clock_route;
    if (d >= s){
        reverse_clock_route = s + (l - d);
    } else {
        reverse_clock_route = s - d;
    }

    double clock_path_time;
    double reverse_clock_path_time;
    clock_path_time = clock_route / static_cast<double>(x + y);
    if (x >= y){
        cout << setprecision(10) << clock_path_time << endl;
    } else {
        reverse_clock_path_time = reverse_clock_route / static_cast<double>(y - x);
        cout << setprecision(10) << min(clock_path_time, reverse_clock_path_time) << endl;
    }
    return 0;
}