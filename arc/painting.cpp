#include <algorithm>
#include <iostream>
#include <math.h>
#include <vector>
#include <map>
using namespace std;

bool judge_inside_circle(int x, int y, int center_x, int center_y, int radius){
    return pow(x - center_x, 2.0) + pow(y - center_y, 2.0) <= pow(radius, 2.0);
}

bool judge_inside_rectangle(int x, int y, int x_1, int y_1, int x_2, int y_2){
    return x_1 <= x && x <= x_2 && y_1 <= y && y <= y_2;
}

int main(){
    int x_c, y_c, r;cin>>x_c>>y_c>>r;
    int x_r_1, y_r_1, x_r_2, y_r_2;cin>>x_r_1>>y_r_1>>x_r_2>>y_r_2;

    vector<pair<int, int>> circle;
    vector<pair<int, int>> rectangle;

    for (int h=-100;h<=100;h++){
        for (int w=-100;w<=100;w++){
            if (judge_inside_circle(w, h, x_c, y_c, r)){
                circle.push_back(make_pair(w, h));
            }
            if (judge_inside_rectangle(w, h, x_r_1, y_r_1, x_r_2, y_r_2)){
                rectangle.push_back(make_pair(w, h));
            }

        }
    }
    bool judge_first = false;
    for (auto c : circle){
        if (find(rectangle.begin(), rectangle.end(), c) == rectangle.end()){
            judge_first = true;
            break;
        }
    }
    bool judge_second = false;
    for (auto r : rectangle){
        if (find(circle.begin(), circle.end(), r) == circle.end()){
            judge_second = true;
            break;
        }
    }
    if (judge_first){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    if (judge_second){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;

}