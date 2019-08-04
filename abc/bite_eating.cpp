#include <iostream>
using namespace std;

int main(){
    int n, l;
    cin >> n >> l;
    
    int tastes [n];
    for (int i=0;i<n;i++){
        tastes[i] = l + (i + 1) - 1;
    }

    int smallest;
    int smallest_index;
    for (int i=0;i<n;i++){
        if (i == 0){
            smallest = abs(tastes[i]);
            smallest_index = i;
        } else {
        if (smallest>=abs(tastes[i])){
            smallest = abs(tastes[i]);
            smallest_index = i;
        }
        }
    }

    int taste_sum = 0;
    for (int i=0;i<n;i++){
        if (i == smallest_index){
            continue;
        }
        taste_sum += tastes[i];
    }
    cout << taste_sum << endl;
    return 0;
}