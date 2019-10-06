#include <iostream>
using namespace std;

bool judge(int n, int ng_1, int ng_2, int ng_3){
    return n != ng_1 && n != ng_2 && n != ng_3;
}

int main(){
    int n, ng_1, ng_2, ng_3;
    cin >> n;
    cin >> ng_1;
    cin >> ng_2;
    cin >> ng_3;

    if (!judge(n, ng_1, ng_2, ng_3)){
        cout << "NO" << endl;
        return 0;
    }
    int acc = 0;
    while (true){
        if (judge(n-3, ng_1, ng_2, ng_3)){
            n -= 3;
        } else if (judge(n-2, ng_1, ng_2, ng_3)){
            n -= 2;
        } else if (judge(n-1, ng_1, ng_2, ng_3)){
            n -= 1;
        } else {
            cout << "NO" << endl;
            break;
        }
        acc++;
        if (n <= 0){
            cout << "YES" << endl;
            break;
        }
        if (acc == 100){
            cout << "NO" << endl;
            break;
        }
    }
    return 0;

}