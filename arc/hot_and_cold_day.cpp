#include<iostream>
using namespace std;

bool one(float max_num, float min_num){
    return max_num >= 35.0;
}

bool two(float max_num, float min_num){
    return (30.0 <= max_num && max_num < 35.0);
}

bool three(float max_num, float min_num){
    return (25.0 <= max_num && max_num < 30.0);
}

bool four(float max_num, float min_num){
    return 25.0 <= min_num;
}

bool five(float max_num, float min_num){
    return (min_num < 0.0 && 0.0 <= max_num);
}

bool six(float max_num, float min_num){
    return max_num < 0.0;
}

int main(){
    int n;cin>>n;
    int acc_1, acc_2, acc_3, acc_4, acc_5, acc_6;
    acc_1 = acc_2 = acc_3 = acc_4 = acc_5 = acc_6 = 0;
    float max_num, min_num;
    for (int i=0;i<n;i++){
        cin >> max_num >> min_num;
        if (one(max_num, min_num)){
            acc_1++;
        }
        if (two(max_num, min_num)){
            acc_2++;
        }
        if (three(max_num, min_num)){
            acc_3++;
        }
        if (four(max_num, min_num)){
            acc_4++;
        }
        if (five(max_num, min_num)){
            acc_5++;
        }
        if (six(max_num, min_num)){
            acc_6++;
        }
    }
    cout << acc_1 << " " << acc_2 << " " << acc_3 << " " << acc_4 << " " << acc_5 << " " << acc_6 << endl;
    return 0;
}
