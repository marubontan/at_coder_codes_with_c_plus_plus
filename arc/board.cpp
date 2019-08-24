#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n, m;
    cin >> n >> m;
    vector<int> threads(m);
    for (int i=0;i<m;i++){
        cin >> threads[i];
    }
    reverse(threads.begin(), threads.end());
    vector<int> latest_thread_update_information(m);
    int count = 0;
    for (int i=0;i<m;i++){
        if (find(latest_thread_update_information.begin(), latest_thread_update_information.end(), threads[i]) != latest_thread_update_information.end()){
            continue;
        } else {
            latest_thread_update_information[count] = threads[i];
            count += 1;
        }
    }

    vector<int> original_threads(n);
    for (int i=0;i<n;i++){
        original_threads[i] = i + 1;
    }

    for (int i;i<count;i++){
        cout << latest_thread_update_information[i] << endl; 
    }
    
    vector<int> new_vec(count);
    for (int i=0;i<count;i++){
        new_vec[i] = latest_thread_update_information[i];
    }
    for (auto &i : original_threads){
        if (find(new_vec.begin(), new_vec.end(), i) != new_vec.end()){
        } else {
            cout << i << endl;
        }
    }
    return 0;
}