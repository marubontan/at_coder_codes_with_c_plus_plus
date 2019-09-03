#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> t(n);
    vector<int> x(n);
    vector<int> y(n);
    for (int i=0;i<n;i++){cin >> t[i] >> x[i] >> y[i];}

    int prev_x = 0;
    int prev_y = 0;
    int prev_t = 0;
    string s = "Yes";
    int distance;
    int time_interval;
    for (int i=0;i<n;i++){
        distance = abs(x[i] - prev_x) + abs(y[i] - prev_y);
        time_interval = t[i] - prev_t;
        if (distance > time_interval){
            s = "No";
            break;
        } else {
            if (abs((distance - time_interval) % 2) == 1){
                s = "No";
                break;
            }
        }
        prev_x = x[i];
        prev_y = y[i];
        prev_t = t[i];
    }
    cout << s <<  endl;


}