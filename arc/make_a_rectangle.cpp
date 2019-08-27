#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

map<long long, int> counter(vector<long long> vec){
    map<long long, int> c;
    for (auto &v : vec){
        c[v]++;
    }
    return c;
}
vector<pair<long long, int>> sort_map(map<long long, int> mapOfPlanets)
{
    vector <pair<long long, int> > planets(mapOfPlanets.begin(), mapOfPlanets.end());
    sort(planets.begin(), planets.end(), [](auto lhs, auto rhs) {return lhs.first > rhs.first; });
    return planets;
}

int main(){
    int n;
    cin >> n;
    vector<long long> sticks(n);
    for (int i=0;i<n;i++){
        cin >> sticks[i];
    }
    auto c = counter(sticks);
    auto freq = sort_map(c);

    long long first = 0;
    long long second = 0;
    for (auto &item : freq){
        if (item.second >= 4 && first == 0){
            cout << item.first * item.first << endl;
            return 0;
        } else if (item.second >= 2){
            if (first == 0){
                first = item.first;
            } else{
                second = item.first;
                break;
            }
        }
    }
    cout << first * second << endl;
}