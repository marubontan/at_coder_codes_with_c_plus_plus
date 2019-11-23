#include<algorithm>
#include<iostream>
#include<map>
#include<math.h>
#include<iomanip>
#include<vector>
using namespace std;

long double calculate_distance(vector<pair<int, int>> towns){
    long double distance_sum = 0.0;
    for (int i=0;i<towns.size()-1;i++){
        distance_sum += sqrt(pow((towns[i].first - towns[i+1].first), 2.0) + pow((towns[i].second - towns[i+1].second), 2.0));
    }
    return distance_sum;
}

int main(){
    int n;cin>>n;
    vector<pair<int, int>> towns(n);
    int x, y;
    for (int i=0;i<n;i++){
        cin >> x >> y;
        towns[i] = make_pair(x, y);
        }
    sort(towns.begin(), towns.end());
    long double distance_sum = 0;
    long double count = 0.0;
    do{
        distance_sum += calculate_distance(towns);
        count += 1.0;
    } while(next_permutation(towns.begin(), towns.end()));
    cout <<setprecision(10) << distance_sum / count << endl;
    return 0;
    
}