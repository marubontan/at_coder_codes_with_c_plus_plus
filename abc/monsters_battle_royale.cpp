#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long n;cin>>n;
    vector<long long> monsters(n);for (long long i=0;i<n;i++){cin>>monsters[i];}

    long long min_val = 100000000000;
    for (long long i=0;i<n;i++){
        if (monsters[i] < min_val){
            min_val = monsters[i];
        }
    }

    bool odd = false;
    bool all_same = true;
    for(long long i=0;i<n;i++){
        if (monsters[i] % 2 == 1){
            odd = true;
            break;
        }
    }
    for (long long i=1;i<n;i++){
        if (monsters[0] != monsters[i]){
            all_same = false;
            break;
        }
    }

    if (odd && all_same){
        cout << min_val <<endl;
        return 0;

    }

    if (odd){
        cout << 1 << endl;
        return 0;
    }


    while (true){
        bool all_divided = true;
        long long temp_min = min_val;
        for (long long i=0;i<n;i++){
            if (monsters[i] % min_val != 0){
                all_divided = false;
                if (monsters[i] % min_val < temp_min){
                    temp_min = monsters[i] % min_val;
                }
            }
        }
        min_val = temp_min;
        if (all_divided){
            break;
        }
    }
    cout << min_val << endl;
    return 0;
}