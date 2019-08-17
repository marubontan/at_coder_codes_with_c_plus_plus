#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a, b, c, d, e;
    double max_score = 0.0;
    double score;
    for (int i=0;i<n;i++){
        cin >> a >> b >> c >> d >> e;
        score = a + b + c + d + e * (110.0 / 900.0);
        if (score > max_score){
            max_score = score;
        }
    }
    cout << setprecision(10) << max_score << endl;

    return 0;
}