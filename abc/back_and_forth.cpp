#include <iostream>
#include <vector>
using namespace std;

int main(){
    int sx, sy, tx, ty;cin>>sx>>sy>>tx>>ty;

    vector<int> actions;
    for (int i=0;i<abs(tx - sx);i++){
        actions.push_back((tx - sx) / abs(sx - tx));
    }
    for (int i=0;i<abs(ty - sy);i++){
        actions.push_back(2 * ((ty - sy) / abs(sy - ty)));
    }
    for (int i=0;i<abs(sx - tx);i++){
        actions.push_back((sx - tx) / abs(sx - tx));
    }
    for (int i=0;i<abs(sy - ty);i++){
        actions.push_back(2 * ((sy - ty) / abs(sy - ty)));
    }
    actions.push_back(2 * (((ty - sy) / abs(ty - sy)) * -1));
    for (int i=0;i<abs(tx - sx) + 1;i++){
        actions.push_back((tx - sx) / abs(tx - sx));
    }
    for (int i=0;i<abs(ty - sy) + 1;i++){
        actions.push_back(2 * ((ty - sy) / abs(ty - sy)));
    }
    actions.push_back((sx - tx) / abs(sx - tx));
    actions.push_back(2 * ((ty - sy) / abs(ty - sy)));
    for (int i=0;i<abs(sx - tx) + 1;i++){
        actions.push_back((sx - tx) / abs(sx - tx));
    }
    for (int i=0;i<abs(sy - ty) + 1;i++){
        actions.push_back(2 * ((sy - ty) / abs(sy - ty)));
    }
    actions.push_back((tx - sx) / abs(tx - sx));
    

    for (auto a : actions){
        if (a == 1){
            cout << "R";
        } else if (a == -1){
            cout << "L";
        } else if (a == 2){
            cout << "U";
        } else {
            cout << "D";
        }
    }
    cout << endl;
    return 0;

}