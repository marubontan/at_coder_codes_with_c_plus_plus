#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector<long long> heights(n); for (int i=0;i<n;i++){cin >> heights[i];};
    int longest_stream = 0;
    int temporary_stream = 0;
    long long previous = heights[0];
    if (n==1){
        cout << 0 << endl;
    } else {
        for (int i=1;i<n;i++){
            if (heights[i] <= previous){
                temporary_stream += 1;
            } else {
                if (temporary_stream >= longest_stream){
                    longest_stream = temporary_stream;
                }
                temporary_stream = 0;
            }
            previous = heights[i];
        }
        if (temporary_stream >= longest_stream){
            longest_stream = temporary_stream;
        }
        cout << longest_stream << endl;
    }
    return 0;
}