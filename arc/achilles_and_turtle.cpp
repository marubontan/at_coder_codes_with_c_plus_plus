#include <iostream>
#include <iomanip> 
using namespace std;

int main(){
    int n;cin>>n;
    float v_a, v_b, l;cin>>v_a>>v_b>>l;

    for (int i=0;i<n;i++){
        float used_time = l / v_a;
        l = v_b * used_time;
    }
    cout <<setprecision(10) << l << endl;
    return 0;
}