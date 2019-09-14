#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector <int> islands(n); for(int i=0;i<n;i++){cin>>islands[i];}

    if (accumulate(islands.begin(), islands.end(), 0) % islands.size() != 0){
        cout << -1 <<endl;
        return 0;
    }

    int mean_population = accumulate(islands.begin(), islands.end(), 0) / n;
    int island_num_acc = 0;
    int population_acc = 0;
    int total_acc = 0;
    for (auto p : islands){
        island_num_acc++;
        population_acc += p;
        if (population_acc % island_num_acc == 0 && population_acc / island_num_acc == mean_population){
            total_acc += island_num_acc - 1;
            island_num_acc=0;
            population_acc = 0;

        }
    }
    cout << total_acc <<endl;
}