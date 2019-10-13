#include <iostream>
#include <vector>
#include <map>
#include <cstring>
using namespace std;

bool seen[51];
void dfs(int target, map<int, vector<int>> graph){
    seen[target] = true;
    for (auto adjacent : graph[target]){
        if (seen[adjacent] == false){
            dfs(adjacent, graph);
        }
    }
}

int main(){
    int n, m;cin>>n>>m;
    vector<pair<int, int>> connections(m);
    int l,r;
    for (int i=0;i<m;i++){
        cin >> l >> r;
        connections[i] = make_pair(l, r);
    }

    int acc = 0;    
    for (int i=0;i<m;i++){
        map<int, vector<int>> graph;
        for (int j=0;j<m;j++){
            if (j != i){
                graph[connections[j].first].push_back(connections[j].second);
                graph[connections[j].second].push_back(connections[j].first);
            }
        }

        memset(seen, false, sizeof(seen));
        dfs(1, graph);
        
        for (int k=1;k<=n;k++){
            if (seen[k] == false){
                acc++;
                break;
            }
        }

    }
    cout << acc << endl;
}