#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    n %= 12;
    double m_position = (360 / 60) * m;
    double n_position = (360 / 12) * n + ((360 / 12) / 60.0 * m);
    double val = max(m_position, n_position) - min(m_position, n_position);
    cout << setprecision(5) << min(val, 360.0 - val) << endl;
    return 0;
}