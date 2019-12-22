#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    int start_x, start_y, end_x, end_y, used_time, speed;
    cin >> start_x >> start_y >> end_x >> end_y >> used_time >> speed;
    int n; cin>>n;
    int x, y;
    string cheated = "NO";
    for (int i=0;i<n;i++){
        cin >> x >> y;
        double start_to_girl = sqrt(double(pow((x - start_x), 2.0) + pow((y - start_y), 2.0)));
        double girl_to_end = sqrt(double(pow((end_x - x), 2.0) + pow((end_y - y), 2.0)));
    if ((start_to_girl + girl_to_end) <= used_time * speed){
                cheated = "YES";
        }
    }
    cout << cheated << endl;
    return 0;
    
}