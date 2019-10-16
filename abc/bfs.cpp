#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;

queue<pair<int, int>> next_target;
map<pair<int, int>, int> times;

void bfs(vector<string> maze){
    if (next_target.empty()){
        return;
    }
    auto item = next_target.front();
    next_target.pop();
    int x = item.first;
    int y = item.second;
    vector<int> xs {0, 1, 0, -1};
    vector<int> ys {1, 0, -1, 0};
    for (int i=0;i<4;i++){
        int x_p = x + xs[i];
        int y_p = y + ys[i];
        if (maze[y_p][x_p] == '.' && times[make_pair(x_p, y_p)] == -1){
            next_target.push(make_pair(x_p, y_p));
            times[make_pair(x_p, y_p)] = times[make_pair(x, y)] + 1;
        }
    }
    bfs(maze);
}

int main(){
    int r, c;cin>>r>>c;
    int s_y, s_x, g_y, g_x;
    cin >> s_y >> s_x;
    cin >> g_y >> g_x;
    vector<string> maze(r);
    for (int i=0;i<r;i++){
        string temp;
        cin >> temp;
        maze[i] = temp;
    }
    next_target.push(make_pair(s_x - 1, s_y - 1));
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            times[make_pair(j, i)] = -1;
        }
    }
    times[make_pair(s_x - 1, s_y - 1)] = 0;
    bfs(maze);
    cout << times[make_pair(g_x-1, g_y-1)] << endl;
    return 0;
}