#include <iostream>
using namespace std;
int main(){
    int c_1, c_2, c_3, c_4, c_5, c_6, c_7, c_8, c_9;
    cin >> c_1 >> c_2 >> c_3;
    cin >> c_4 >> c_5 >> c_6;
    cin >> c_7 >> c_8 >> c_9;
    bool condition_1 = c_2 - c_1 == c_5 - c_4 && c_5 - c_4 == c_8 - c_7;
    bool condition_2 = c_3 - c_2 == c_6 - c_5 && c_6 - c_5 == c_9 - c_8;
    bool condition_3 = c_4 - c_1 == c_5 - c_2 && c_5 - c_2 == c_6 - c_3;
    bool condition_4 = c_7 - c_4 == c_8 - c_5 && c_8 - c_5 == c_9 - c_6;
    if (condition_1 && condition_2 && condition_3 && condition_4){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}