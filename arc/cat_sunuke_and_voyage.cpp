#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> voyages(m);
    for (int i=0;i<m;i++){
        vector<int> voyage(2);
        cin >> voyage[0] >> voyage[1];
        voyages[i] = voyage;
    }
    vector<int> points;
    for (int i=0;i<m;i++){
        if (voyages[i][0] == 1){
            points.push_back(voyages[i][1]);
        }else if(voyages[i][1] == n){
            points.push_back(voyages[i][0]);
        }
    }
    int points_size = points.size();
    sort(points.begin(), points.end());
    points.erase(unique(points.begin(), points.end()), points.end());
    int unique_points_size = points.size();
    if (points_size == unique_points_size){
        cout << "IMPOSSIBLE" << endl;
    } else {
        cout << "POSSIBLE" << endl;
    }

    return 0;
}