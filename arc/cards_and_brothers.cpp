#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> cards(n); for(int i=0;i<n;i++){cin >> cards[i];}

    sort(cards.begin(), cards.end(), greater<int>());
    long long acc = 0;
    for (int i=0;i<n;i++){
        if (i % 2 == 0){
            acc += cards[i];
        }
    }
    cout << acc << endl;
    return 0;

}