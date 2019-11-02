#include <iostream>
#include <vector>
using namespace std;

void dfs(int h, int w, vector<string> &lakes){
    lakes[h][w] = '.';
    vector<int> xs{0, 1, 1, 1, 0, -1, -1, -1};
    vector<int> ys{1, 1, 0, -1, -1, -1, 0, 1};

    for (int i=0;i<8;i++){
        int x_p = w + xs[i];
        int y_p = h + ys[i];
        if (0 <= x_p && x_p < lakes[0].size() && 0 <= y_p && y_p < lakes.size()){
            if (lakes[y_p][x_p] == 'W'){
                dfs(y_p, x_p, lakes);
            }
        }
    }
}

int main(){
    int n,m;cin>>n>>m;
    vector<string> lakes(n);for (int i=0;i<n;i++){cin>>lakes[i];}

    int counter = 0;
    while (true){
        int nearest_h = -1;
        int nearest_w = -1;
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                if (lakes[i][j] == 'W'){
                    nearest_h = i;
                    nearest_w = j;
                    break;
                }
            }
            if (nearest_h != -1){
                break;
            }
        }
        if (nearest_h == -1){
            break;
        }

        dfs(nearest_h, nearest_w, lakes);
        counter++;
    }
    cout << counter << endl;
    return 0;
}