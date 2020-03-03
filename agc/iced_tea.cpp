#include <algorithm>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    long long q, h, s, d;cin>>q>>h>>s>>d;
    double n;cin>>n;

    vector<pair<long long, pair<long long, double>>> cost_performance;
    cost_performance.push_back(make_pair(q / 0.25, make_pair(q, 0.25)));
    cost_performance.push_back(make_pair(h / 0.5, make_pair(h, 0.5)));
    cost_performance.push_back(make_pair(s / 1.0, make_pair(s, 1.0)));
    cost_performance.push_back(make_pair(d / 2.0, make_pair(d, 2.0)));

    sort(cost_performance.begin(), cost_performance.end());

    long long acc = 0;
    for (auto item : cost_performance){
        if (n == 0){
            break;
        }
        auto item_info = item.second;
        auto price = item_info.first;
        auto amount = item_info.second;

        long long num = floor(n / amount);
        acc += num * price;
        n -= amount * num;
    }

    cout << acc <<endl;
    return 0;
}