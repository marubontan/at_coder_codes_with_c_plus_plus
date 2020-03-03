#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

bool range_base (pair<long long, long long> i, pair<long long, long long>j) {
    return (i.first + i.second < j.first + j.second);
    }
int main(){
    int n;cin>>n;
    vector<pair<long long, long long>> robots(n);
    for(int i=0;i<n;i++){
        long long x, l;
        cin>>x>>l;
        robots[i] = make_pair(x, l);
    }
    sort(robots.begin(), robots.end(), range_base);
    long long acc = 0;
    pair<long long, long long> latest_robot = robots[0];
    acc++;
    if (n == 1){
        cout << acc << endl;
        return 0;
    }

    for (int i=1;i<n;i++){
        if (latest_robot.first + latest_robot.second <= robots[i].first - robots[i].second){
            acc++;
            latest_robot = robots[i];
        }
    }
    cout << acc << endl;
    return 0;

}