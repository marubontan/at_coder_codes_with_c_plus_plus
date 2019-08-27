#include <iostream>
using namespace std;

int main(){
    string d;
    cin >> d;

    if (d == "Sunday"){
        cout << 0 << endl;
    } else if (d == "Monday"){
        cout << 5 << endl;
    } else if (d == "Tuesday"){
        cout << 4 << endl;
    } else if (d == "Wednesday"){
        cout << 3 << endl;
    } else if (d == "Thursday"){
        cout << 2 << endl;
    } else if (d == "Friday"){
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
}