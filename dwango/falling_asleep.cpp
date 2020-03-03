#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
    int n;cin>>n;
    vector<pair<string, int>> playlists(n);
    for (int i=0;i<n;i++){
        string s;
        int t;
        cin>>s>>t;
        playlists[i] = make_pair(s, t);
    }

    string x;cin>>x;

    bool started = false;
    int acc = 0;
    for (auto item : playlists){
        if (started){
            acc += item.second;
        }
        if (item.first == x){
            started = true;
        }
    }
    cout << acc <<endl;
    return 0;
}