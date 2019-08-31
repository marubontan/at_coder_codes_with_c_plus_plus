#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    vector<int> necessary_cards(m); for (int i=0;i<m;i++){cin>>necessary_cards[i];};

    int outcome = -1;
    for (int i=0;i<m;i++){
        if (n <= a){
            n += b;
        }
        if (n >= necessary_cards[i]){
            n -= necessary_cards[i];
        } else {
            outcome = i;
            break;
        }
    }
    if (outcome == -1){
        cout << "complete" << endl;
    } else {
        cout << outcome + 1 << endl;
    }
    return 0;
}