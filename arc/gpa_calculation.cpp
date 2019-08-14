#include <iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    string degrees;
    cin >> n;
    cin >> degrees;

    int score_sum = 0;
    int score = 0;
    for (auto &s : degrees){
        if (s == 'A'){
            score = 4;
        } else if (s == 'B'){
            score = 3;
        } else if (s == 'C'){
            score = 2;
        } else if (s == 'D'){
            score = 1;
        } else {
            score = 0;
        }
        score_sum += score;
    }
    cout << setprecision(10) << score_sum / (double)n << endl;
}
