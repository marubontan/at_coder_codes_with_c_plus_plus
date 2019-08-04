#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

float calculate_distance(vector<int> d_1, vector<int> d_2){
    int vector_size = d_1.size();
    int distance_sum = 0;
    for (int i=0;i<vector_size;i++){
        distance_sum += pow((d_1[i] - d_2[i]), 2.0);
    }
    return sqrt(distance_sum);
}

bool judge_if_integer_or_float(float value){
    return (ceil(value) == floor(value));
}

int main(){
    int n,d;
    cin >> n >> d;
    vector<vector<int>> matrix(n, vector<int>(d));
    for (int i=0;i<n;i++){
        for (int j=0;j<d;j++){
            cin >> matrix[i][j];
        }
    }
    
    int integer_number = 0;
    for (int i_1=0;i_1<n-1;i_1++){
        for (int i_2=i_1+1;i_2<n;i_2++){
            float distance = calculate_distance(matrix[i_1], matrix[i_2]);
            if (judge_if_integer_or_float(distance)){
                integer_number += 1;
            }
        }
    }
    cout << integer_number << endl;
    return 0;
}