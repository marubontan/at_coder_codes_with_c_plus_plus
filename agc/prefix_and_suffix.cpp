#include <iostream>
using namespace std;

int main(){
    int n;
    string s, t;
    cin >> n;
    cin >> s;
    cin >> t;

    int min_ind=n;
    for (int i=0;i<n;i++){
        string sub_s = "";
        string sub_t = "";
        for (int j=i;j<n;j++){
            sub_s += s[j];
        }
        for (int j=0;j<n-i;j++){
            sub_t += t[j];
        }

        if (sub_s == sub_t){
            min_ind = i;
            break;
        }
    }
    cout << 2 * min_ind + (n - min_ind) << endl;
    return 0;
}