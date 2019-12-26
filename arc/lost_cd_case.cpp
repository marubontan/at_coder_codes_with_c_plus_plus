#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    vector<int> cases(n+1);for(int i=1;i<n+1;i++){cases[i]=i;}

    int listened_cd = 0;
    for (int i=0;i<m;i++){
        int cd;cin>>cd;
        int target_index;
        if (listened_cd == cd){
            continue;
        }
        for (int j=1;j<n+1;j++){
            if (cases[j] == cd){
                target_index = j;
                break;
            }
        }
        cases[target_index] = listened_cd;
        listened_cd = cd; 
    }

    for (int i=1;i<n+1;i++){
        cout << cases[i] << endl;
    }
    return 0;

}