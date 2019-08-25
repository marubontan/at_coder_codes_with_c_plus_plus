#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    vector<long long> cities(n+1);
    vector<long long> heros(n+1);
 
    for (int i=0;i<n+1;i++){
        cin >> cities[i];
    }
    for (int i=0;i<n;i++){
        cin >> heros[i];
    }
    heros[n] = 0;
 
    long long acc = 0;
    long long prev_hero = 0;
    long long prev_hero_min = 0;
    for (int i=0;i<n+1;i++){
        acc += min((prev_hero + heros[i]), cities[i]);
        prev_hero = max(heros[i] - max((cities[i] - prev_hero), prev_hero_min), prev_hero_min);
    }
 
    cout << acc << endl;
    return 0;
}