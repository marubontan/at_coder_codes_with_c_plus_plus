#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> stairs(n);
    vector<int> updated_stairs(n);
    for (int i=0;i<n;i++){
        cin >> stairs[i];
    }

    if (n==1){
        cout << "Yes" << endl;
    } else {
        updated_stairs[0] = stairs[0];
        int diff;
        string flag="Yes";
        for (int i=1;i<n;i++){
            diff = stairs[i] - updated_stairs[i-1];
            if (diff < 0){
                flag = "No";
                break;
            } else if (diff == 0){
                updated_stairs[i] = stairs[i];
            } else {
                updated_stairs[i] = stairs[i] - 1;
            }
        }
        cout << flag << endl;
    }
    return 0;

}