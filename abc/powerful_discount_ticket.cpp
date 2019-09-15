#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    int n, m;cin>>n>>m;
    priority_queue<long long> products;
    long long temp;
    for(int i=0;i<n;i++){
        cin>> temp;
        products.push(temp);
    }

    for (int i=0;i<m;i++){
        auto max_product_with_discount = products.top() / 2;
        products.pop();
        products.push(max_product_with_discount);
    }
    long long acc = 0;
    while(!products.empty()){
        acc += products.top();
        products.pop();
    }
    cout << acc << endl;
    return 0;
}
