#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    double a, b, x;cin>>a>>b>>x;
    double area = x / a;

    double border = a * b / 2.0;
    if (area > border){
        double diff = (area - border);
        double diff_hight = (2.0 * area ) / a - b;

        double longest = sqrt((a * a + (b- diff_hight) * (b-diff_hight)));
        double cos_c = (((b- diff_hight) * (b- diff_hight)) - (a * a) - (longest * longest)) / (2 * a * longest);

        double result = acos (cos_c) * 180.0 / M_PI;
        cout<< setprecision(10) << 180.0 - result <<endl;
    } else {
        double a_temp = (area * 2.0) / b;
        double longest = sqrt((a_temp * a_temp) + (b * b));
        double cos_c = ((b * b) - (a_temp * a_temp) - (longest * longest)) / (2 * a_temp * longest);
        cout << setprecision(10) << 180.0 - acos(cos_c) * 180.0 / M_PI<<endl;

    }

}