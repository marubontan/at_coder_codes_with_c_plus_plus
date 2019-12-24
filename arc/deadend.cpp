#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>> grid;
    for (int i=0;i<4;i++){
        vector<int> row;
        for (int j=0;j<4;j++){
            int temp;cin>>temp;
            row.push_back(temp);
        }
        grid.push_back(row);
    }
    bool possible = false;
    for (int i=0;i<4;i++){
        int prev = grid[i][0];
        for (int j=1;j<4;j++){
            if (grid[i][j] == prev){
                possible = true;
            }
            prev = grid[i][j];
        }
    }
    for (int i=0;i<4;i++){
        int prev = grid[0][i];
        for (int j=1;j<4;j++){
            if (grid[j][i] == prev){
                possible = true;
            }
            prev = grid[j][i];
        }
    }
    if (possible){
        cout << "CONTINUE" << endl;
    } else {
        cout << "GAMEOVER" << endl;
    }
    return 0;
}
