#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

bool seen[10][10];
void dfs(int h, int w, vector<string> area){
    vector<int> x{0, 1, 0, -1};
    vector<int> y{1, 0, -1, 0};
    seen[h][w] = true;

    for (int i=0;i<4;i++){
        auto surrounding_x = w + x[i];
        auto surrounding_y = h + y[i];
        if (0<=surrounding_x && surrounding_x<=9 && 0<=surrounding_y && surrounding_y<=9){
            if (area[surrounding_y][surrounding_x] == 'o'){
                if (seen[surrounding_y][surrounding_x] == false){
                    dfs(surrounding_y, surrounding_x, area);
                }
            }
        }
    }
};

int main(){
    vector<string> area(10);for(int i=0;i<10;i++){cin >> area[i];}

    for (int h=0;h<10;h++){
        for (int w=0;w<10;w++){
            if (area[h][w] == 'o'){
                continue;
            }
            memset(seen, false, sizeof(seen));
            dfs(h, w, area);

            bool flag = true;
            for (int i=0;i<10;i++){
                for (int j=0;j<10;j++){
                    if (area[i][j] == 'o'){
                        if (seen[i][j] == false){
                            flag = false;
                            break;
                        }
                    }
                }
            }
            if (flag){
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}