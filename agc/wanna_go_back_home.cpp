#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s; cin >> s;
    vector<char> travel_plan(s.size());
    for (int i;i<s.size();i++){
        travel_plan[i] = s[i];
    }
    sort(travel_plan.begin(), travel_plan.end());
    travel_plan.erase(unique(travel_plan.begin(), travel_plan.end()), travel_plan.end());

    if (find(travel_plan.begin(), travel_plan.end(), 'N') != travel_plan.end()){
        if (find(travel_plan.begin(), travel_plan.end(), 'S') == travel_plan.end()){
            cout << "No" << endl;
            return 0;
        }
    }

    if (find(travel_plan.begin(), travel_plan.end(), 'S') != travel_plan.end()){
        if (find(travel_plan.begin(), travel_plan.end(), 'N') == travel_plan.end()){
            cout << "No" << endl;
            return 0;
        }
    }

    if (find(travel_plan.begin(), travel_plan.end(), 'W') != travel_plan.end()){
        if (find(travel_plan.begin(), travel_plan.end(), 'E') == travel_plan.end()){
            cout << "No" << endl;
            return 0;
        }
    }

    if (find(travel_plan.begin(), travel_plan.end(), 'E') != travel_plan.end()){
        if (find(travel_plan.begin(), travel_plan.end(), 'W') == travel_plan.end()){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" <<endl;
    return 0;
}