#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

string map_rates(int rate){
    string color;
    if (1 <= rate && rate <=399){
        color = "grey";
    } else if (400 <= rate && rate <= 799){
        color = "brown";
    } else if (800 <= rate && rate <= 1199){
        color = "green";
    } else if (1200 <= rate && rate <= 1599){
        color = "light_blue";
    } else if (1600 <= rate && rate <= 1999){
        color = "blue";
    } else if (2000 <= rate && rate <= 2399){
        color = "yellow";
    } else if (2400 <= rate && rate <= 2799){
        color = "orange";
    } else if (2800 <= rate && rate <= 3199){
        color = "red";
    } else{
        color = "sp";
    }
    return color;
}

map<string, int> counter(vector<string> colors){
    map<string, int> color_frequency;
    for (auto &c : colors){
        color_frequency[c] += 1;
    }
    return color_frequency;
}


int main(){
    int n;
    cin >> n;
    vector<int> rates(n);
    for (int i=0;i<n;i++){
        cin >> rates[i];
    }

    vector<string> colors(n);
    for (int i=0;i<n;i++){
        colors[i] = map_rates(rates[i]);
    }

    auto color_frequency = counter(colors);

    int acc = 0;
    for (auto& item: color_frequency){
        if (item.first != "sp"){
            acc += 1;
        }
    }
    cout << max(acc, 1) << " " << acc + color_frequency["sp"] << endl;
    return 0;

}