#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> boxes(n);for (int i=0;i<n;i++){cin>>boxes[i];}

    vector<int> piles;
    piles.push_back(boxes[0]);
    if (n == 1){
        cout << 1 << endl;
        return 0;
    }
    for (int i=1;i<n;i++){
        bool flag = false;
        for (auto &p: piles){
            if (p >= boxes[i]){
                p = boxes[i];
                flag = true;
                break;
            }
        }
        if (!flag){
            piles.push_back(boxes[i]);
        }

    }
    cout << piles.size() << endl;
    return 0;
}