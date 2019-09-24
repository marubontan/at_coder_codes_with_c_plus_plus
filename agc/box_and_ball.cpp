#include <algorithm>
#include <iostream>
#include <map>
#include <set> 
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    map<int, int> hist;
    for (int i=1;i<=n;i++){
        hist[i] = 1;
    }
    set<int> red_ball_hist;
    red_ball_hist.insert(1);
    int x,y;
    for (int i=0;i<m;i++){

        cin >> x >> y;
        hist[x]--;
        hist[y]++;
        if (red_ball_hist.find(x) != red_ball_hist.end()){
            red_ball_hist.insert(y);
        }
        if (hist[x] == 0){
            red_ball_hist.erase(x);
        }
    }
    int acc=0;
    for (auto r : red_ball_hist){
        if (hist[r] > 0){
            acc++;
        }
    }
    cout << acc << endl;
    return 0;
}