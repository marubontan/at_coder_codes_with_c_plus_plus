#include <iostream>
#include <vector>
using namespace std;

int main(){
    int h,w;cin>>h>>w;
    vector<string> grids;
    for (int i=0;i<h;i++){
        string row;
        cin>>row;
        grids.push_back(row);
    }

    vector<int> x{0, 1, 0, -1};
    vector<int> y{1, 0, -1, 0};
    bool judge = true;
    for (int i=0;i<h;i++){
        for (int j=0;j<w;j++){
            if (grids[i][j] == '#'){
                bool temp_judge = false;
                for (int k=0;k<4;k++){
                    int target_x = j + x[k];
                    int target_y = i + y[k];
                    if (0 <= target_x && target_x < w && 0 <= target_y && target_y < h){
                        if (grids[target_y][target_x] == '#'){
                            temp_judge = true;
                            break;
                        }
                    }
                }
                if (temp_judge == false){
                    judge = false;
                }
            }
        }
    }
    if (judge){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}