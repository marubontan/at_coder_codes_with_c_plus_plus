#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> hits(6);for(int i=0;i<6;i++){cin>>hits[i];}
    int bonus;cin>>bonus;
    vector<int> mine(6); for(int i=0;i<6;i++){cin>>mine[i];}

    int acc = 0;
    for (auto num: mine){
        if (find(hits.begin(), hits.end(), num) != hits.end()){
            acc++;
        }
    }
    if (acc == 6){
        cout << 1 << endl;
    } else if (acc == 5){
        int not_contained;
        for (auto num: mine){
            if (find(hits.begin(), hits.end(), num) == hits.end()){
                not_contained = num;
                break;
            }
        }
        if (not_contained == bonus){
            cout << 2 << endl;
        } else {
            cout << 3 << endl;
        }
    } else if (acc == 4){
        cout << 4 << endl;
    } else if (acc == 3){
        cout << 5 << endl;
    } else {
        cout << 0 << endl;
    }
}