#include <iostream>
#include <vector>
using namespace std;

int main(){
    int h,w;cin>>h>>w;
    vector<string> grids(h);for(int i=0;i<h;i++){cin>>grids[i];}

    vector<int> x = {0, 1, 1, 1, 0, -1, -1, -1};
    vector<int> y = {1, 1, 0, -1, -1, -1, 0, 1};

    int acc;
    for (int h_i=0;h_i<h;h_i++){
        for (int w_i=0;w_i<w;w_i++){
            acc = 0;
            if (grids[h_i][w_i] == '.'){
                for (int i=0;i<8;i++){
                    int w_p = w_i + x[i];
                    int h_p = h_i + y[i];
                    if (0<=w_p && w_p<w && 0<=h_p && h_p<h){
                        if (grids[h_p][w_p] == '#'){
                            acc++;
                        }
                    }
                }
                cout << acc;
            } else {
                cout << "#";
            }
        }
        cout << endl;
    }
    return 0;
}