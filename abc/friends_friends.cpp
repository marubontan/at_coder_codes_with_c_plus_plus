#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
    int n, m;cin>>n>>m;
    map<int, vector<int>> users;
    for (int i=0;i<m;i++){
        int temp_a, temp_b;
        cin >>temp_a>>temp_b;
        users[temp_a].push_back(temp_b);
        users[temp_b].push_back(temp_a);
    }

    for (int i=1;i<=n;i++){
        int acc = 0;
        auto direct_friends = users[i];
        vector<int> indirect_friends_vec;
        for (auto direct_friend : direct_friends){
            auto indirect_friends = users[direct_friend];
            for (auto indirect_friend : indirect_friends){
                if(indirect_friend != i && find(direct_friends.begin(), direct_friends.end(), indirect_friend) == direct_friends.end()){
                    if (find(indirect_friends_vec.begin(), indirect_friends_vec.end(), indirect_friend) == indirect_friends_vec.end()){
                        acc ++;
                        indirect_friends_vec.push_back(indirect_friend);
                    }
                }
            }
        }
        cout << acc << endl;
    }
    return 0;
}