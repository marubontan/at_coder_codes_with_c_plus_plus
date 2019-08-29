#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> sequence(n);
    for (int i=0;i<n;i++){
        cin >> sequence[i];
    }
    long long acc_1 = 0;
    long long manipulation_1 = 0;
    long long acc_2 = 0;
    long long manipulation_2 = 0;

    for (int i=0;i<sequence.size();i++){
        acc_1 += sequence[i];
        if (i % 2 == 0){
            if (acc_1 >= 0){
                manipulation_1 += acc_1 + 1;
                acc_1 = -1;
            }
        } else {
            if (acc_1 <= 0){
                manipulation_1 += 1 - acc_1;
                acc_1 = 1;
            }
        }
    }
    for (int i=0;i<sequence.size();i++){
        acc_2 += sequence[i];
        if (i % 2 == 0){
            if (acc_2 <= 0){
                manipulation_2 += 1 - acc_2;
                acc_2 = 1;
        }
        } else {
            if (acc_2 >= 0){
                manipulation_2 += acc_2 + 1;
                acc_2 = -1;
            }
        }
    }
    cout << min(manipulation_1, manipulation_2) << endl;
    return 0;
}