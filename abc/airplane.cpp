#include <iostream>
using namespace std;

int main(){
    int times[3];
    for (int i=0;i<3;i++){
        cin>>times[i];
    }
    int minimum_time = 300;
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            if (i!=j){
                int time_to_take = times[i] + times[j];
                if (time_to_take < minimum_time){
                    minimum_time = time_to_take;
                }
            }
        }
    }
    cout<<minimum_time<<endl;
    return 0;
}
