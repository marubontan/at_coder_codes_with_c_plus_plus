#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int blue_counter = 0;
    int red_counter = 0;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        for (int j=0;j<n;j++){
            if (s[j] == 'R'){
                red_counter += 1;
            } else if (s[j] == 'B'){
                blue_counter += 1;
            }
        }
    }
    if (red_counter > blue_counter){
        cout << "TAKAHASHI" << endl;
    } else if (red_counter < blue_counter){
        cout << "AOKI" << endl;
    } else {
        cout << "DRAW" << endl;
    }
    return 0;
}