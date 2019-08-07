#include <algorithm>
#include <iostream>
#include <utility>
#include <map>
#include <vector>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> balls(n);
    for (int i=0;i<n;i++){
        cin >> balls[i];
    }

    map<int, int> counter;
    for(auto &i : balls){
        ++counter[i];
    }
    vector<pair<int,int>> counter_vec( counter.begin(), counter.end() );

    sort(counter_vec.begin(), counter_vec.end(), 
           []( const auto & lhs, const auto & rhs ) 
           { return lhs.second > rhs.second; } );
    
    int top_k=0;
    for (int i=0;i<k;i++){
        if (i < counter_vec.size()){
            top_k += counter_vec[i].second;
        } else {
            break;
        }
    }
    cout << n - top_k << endl;


    return 0;
}