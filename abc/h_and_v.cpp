#include <iostream>
#include <vector>
using namespace std;


vector<vector<int>> combination;
void go(int length, int position, int value, vector<int> value_container){
    value_container.push_back(value);
    if (length <= position){
        combination.push_back(value_container);
        return;
    } else {
        go(length, position+1, 1, value_container);
        go(length, position+1, 0, value_container);
    }
}

int main(){
    int h,w,k;cin>>h>>w>>k;
    vector<string> mat(h);
    for(int i=0;i<h;i++){
        cin >> mat[i];
    }
    vector<int> height_value_container_1, height_value_container_2, width_value_container_1, width_value_container_2;
    go(h, 1, 0, height_value_container_1);
    go(h, 1, 1, height_value_container_2);
    auto combination_height = combination;

    combination = {};
    go(w, 1, 0, width_value_container_1);
    go(w, 1, 1, width_value_container_2);
    auto combination_width = combination;

    long long acc = 0;
    for (auto h_comb : combination_height){
        for (auto w_comb : combination_width){
            int red_count = 0;
            for (int i=0;i<h;i++){
                for (int j=0;j<w;j++){
                    if (mat[i][j] == '#' && h_comb[i] == 0 && w_comb[j] == 0){
                        red_count++;
                    }
                }
            }
            if (red_count == k){
                acc++;
            }

        }
    }
    cout << acc << endl;

}