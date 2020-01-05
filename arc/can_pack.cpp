#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> box(3);for (int i=0;i<3;i++){cin>>box[i];}
    vector<int> target(3);for (int i=0;i<3;i++){cin>>target[i];}

    sort(box.begin(), box.end());
    sort(target.begin(), target.end());

    int max_val = 0;
    int packed_number;
    do {
        do{
            packed_number = (box[0] / target[0]) * (box[1] / target[1]) * (box[2] / target[2]);
            if (packed_number > max_val){
                max_val = packed_number;
            }
        } while (next_permutation(target.begin(), target.end()));
    } while (next_permutation(box.begin(), box.end()));
    cout << max_val << endl;
    return 0;
}