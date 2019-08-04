#include <iostream>
#include <vector>
using namespace std;

bool judge_if_second(vector<int> numbers){
    return ((numbers[0] < numbers[1]) && (numbers[1] < numbers[2])) || ((numbers[2] < numbers[1]) && (numbers[1] < numbers[0]));
}

int main(){
    int n;
    cin >> n;
    vector<int> numbers(n);

    for (int i=0;i<n;i++){
        cin >> numbers[i];
    }

    int count = 0;
    for (int i=1; i<n-1; i++){
        vector<int> target{numbers[i-1], numbers[i], numbers[i+1]};
        if (judge_if_second(target)){
            count += 1;
        }
    }
    cout << count << endl;
    return 0;
}
