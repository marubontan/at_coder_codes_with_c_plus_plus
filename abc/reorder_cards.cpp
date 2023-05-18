# include <iostream>
# include <algorithm>
# include <vector>
using namespace std;


int main(){
    long long h, w, n;
    cin >> h >> w >> n;
    vector<long long> row(n), col(n);
    for (long long i=0;i<n;i++){
        cin >> row[i] >> col[i];
    }
    vector<long long> tempRow = row;
    vector<long long> tempCol = col;

    sort(tempRow.begin(), tempRow.end());
    sort(tempCol.begin(), tempCol.end());
    tempRow.erase(unique(tempRow.begin(), tempRow.end()), tempRow.end());
    tempCol.erase(unique(tempCol.begin(), tempCol.end()), tempCol.end());

    for (long long i=0;i<n;i++){
        row[i] = lower_bound(tempRow.begin(), tempRow.end(), row[i]) - tempRow.begin();
        col[i] = lower_bound(tempCol.begin(), tempCol.end(), col[i]) - tempCol.begin();
    }
    for (long long i=0;i<n;i++){
        cout << row[i] + 1 << " " << col[i] + 1 << endl;
    }
    return 0;
}