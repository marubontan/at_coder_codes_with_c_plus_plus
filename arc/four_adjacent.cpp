#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> data(n);
    for (int i=0;i<n;i++){
        cin>>data[i];
    }

    int four_divisible = 0;
    int two_divisible = 0;
    for (auto &v : data){
        if (v % 4 == 0){
            four_divisible += 1;
        }else{
            if (v % 2 == 0){
                two_divisible += 1;
            }
        }
    }
    int four_coverage;
    if (two_divisible == 0){
        four_coverage = four_divisible * 2 + 1;
    } else {
        four_coverage = four_divisible * 2;
    }
    
    int two_coverage = two_divisible;
    if (four_coverage + two_coverage >= data.size()){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}