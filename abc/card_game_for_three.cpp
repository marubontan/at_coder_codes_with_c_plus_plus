#include <iostream>
#include <queue>
using namespace std;

int main(){
    string a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    queue<char> a_q;
    queue<char> b_q;
    queue<char> c_q;

    for (int i=0;i<a.size();i++){
        a_q.push(a[i]);
    }
    for (int i=0;i<b.size();i++){
        b_q.push(b[i]);
    }
    for (int i=0;i<c.size();i++){
        c_q.push(c[i]);
    }

    char latest = a_q.front();
    a_q.pop();
    if (a_q.empty()){
        cout << "A" << endl;
        return 0;
    }
    while (true){
        if (latest == 'a'){
            if (a_q.empty()){
                cout << "A" << endl;
                return 0;
            }
            latest = a_q.front();
            a_q.pop();

        } else if (latest == 'b'){
            if (b_q.empty()){
                cout << "B" << endl;
                return 0;
            }
            latest = b_q.front();
            b_q.pop();
        } else {
            if (c_q.empty()){
                cout << "C" << endl;
                return 0;
            }
            latest = c_q.front();
            c_q.pop();
        }

    }
}