#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> data(n);
    for (int i=0;i<n;i++){
        cin >> data[i];
    }

    vector<int> even_data(data.size()/2);
    vector<int> odd_data(data.size()/2);
    for (int i=0;i<data.size();i++){
        if (i % 2 == 0){
            even_data[i/2] = data[i];
        } else {
            odd_data[i/2] = data[i];
        }
    }
    vector <int> even_unique;
    vector <int> odd_unique;

    even_unique = even_data;
    odd_unique = odd_data;
    sort(even_unique.begin(), even_unique.end());
    even_unique.erase(unique(even_unique.begin(), even_unique.end()), even_unique.end());

    sort(odd_unique.begin(), odd_unique.end());
    odd_unique.erase(unique(odd_unique.begin(), odd_unique.end()), odd_unique.end());

    if (even_unique.size() == 1 && odd_unique.size() == 1 && even_unique[0] == odd_unique[0]){
        cout << even_data.size() << endl;
    } else {

        int max_even = 0;
        for (auto &e : even_unique){
            int c = count(even_data.begin(), even_data.end(), e);
            if (c > max_even){
                max_even = c;
            }
        }
        int max_odd = 0;
        for (auto &e : odd_unique){
            int c = count(odd_data.begin(), odd_data.end(), e);
            if (c > max_odd){
                max_odd = c;
            }
        }

        cout << data.size() - (max_even + max_odd) <<endl;
    }
    return 0;
}
