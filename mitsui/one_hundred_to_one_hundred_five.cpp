#include <iostream>
using namespace std;

int main(){
    int x;cin>>x;
    bool judge = false;
    int val;
    for (int i=0;i<=1000000;i++){
        val = 105 * i;
        if (x == val){
            cout << 1 << endl;
            return 0;
        } else if (x < val){
            break;
        }
        for (int j=0;j<=1000000;j++){
            val = 105 * i + 104 * i;
            if (x == val){
                cout << 1 << endl;
                return 0;
            } else if (x < val){
                break;
            }
            for (int k=0;k<=1000000;k++){
                val = 105 * i + 104 * j + 103 * k;
                if (x == val){
                    cout << 1 << endl;
                    return 0;
                } else if (x < val){
                    break;
                }
                for (int l=0;l<=1000000;l++){
                    val = 105 * i + 104 * j + 103 * k + 102 * l;
                    if (x == val){
                        cout << 1 << endl;
                        return 0;
                    } else if (x < val){
                        break;
                    }
                    for (int m=0;m<=1000000;m++){
                        val = 105 * i + 104 * j + 103 * k + 102 * l + 101 * m;
                        if (x == val){
                            cout << 1 << endl;
                            return 0;
                        } else if (x < val){
                            break;
                        }
                        for (int o=0;o<=1000000;o++){
                            val = 105 * i + 104 * j + 103 * k + 102 * l + 101 * m + 100 * o;
                            if (x == val){
                                cout << 1 << endl;
                                return 0;
                            } else if (x < val){
                                break;
                            }

                        }
                    }
                }
            }
        }
    }
    cout << 0 << endl;
    return 0;
}