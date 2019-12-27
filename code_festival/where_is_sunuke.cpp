#include <iostream>
#include <vector>
using namespace std;

int main(){
    int h,w;cin>>h>>w;
    vector<vector<string>> df;
    for (int i=0;i<h;i++){
        vector<string> row;
        for (int j=0;j<w;j++){
            string value;
            cin >> value;
            row.push_back(value);
        }
        df.push_back(row);
    }
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i=0;i<h;i++){
        for (int j=0;j<w;j++){
            if (df[i][j] == "snuke"){
                cout << alphabet[j] << i+1 << endl;
                return 0;
            }
        }
    }



}