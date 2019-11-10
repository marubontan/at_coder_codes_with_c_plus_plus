#include <iostream>
#include <vector>
#include <set>
using namespace std;

#define int long long

struct UnionFind{
    vector<int> parents;
    vector<int> rank;

    UnionFind(int n) : parents(n), rank(n) {
        for (int i=1;i<n;i++){
            parents[i] = i;
            rank[i] = 1;
        }
  }

    int find(int x){
        if (parents[x] == x){
            return x;
        } else {
            return parents[x] = find(parents[x]);
        }
    }

    void unite(int x, int y){
        int x_root = find(x);
        int y_root = find(y);

        if (x_root == y_root){
            return;
        }

        if (rank[x_root] < rank[y_root]){
            parents[x] = y_root;
            rank[y_root] += rank[x_root];
        } else {
            parents[y] = x_root;
            rank[x_root] += rank[y_root];
        }
    }

    bool same(int x, int y){
        return find(x) == find(y);
    }
};

signed main(){
    int n, m;cin>>n>>m;

    UnionFind uf(n + 1);
    int left, right;
    for (int i=0;i<m;i++){
        cin >> left >> right;
        uf.unite(left, right);
    }
    for (int i=1;i<n+1;i++){
        uf.find(i);
    }

    set<int> groups;
    for (int i=1;i<n+1;i++){
        if (groups.find(uf.parents[i]) == groups.end()){
            groups.insert(uf.parents[i]);
        }
    }
    cout << groups.size() - 1 << endl;
    return 0;
}
