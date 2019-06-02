#include <bits/stdc++.h>
using namespace std;

bool judge_mm(string s){
    if (stoi(s)>=1&&stoi(s)<=12){
        return true;
    }else{
        return false;
    }
}

int main(){
    string s;
    cin>>s;
    bool judged_mm_first_half = judge_mm(s.substr(0,2));
    bool judged_mm_later_half = judge_mm(s.substr(2,4));
    if (judged_mm_first_half && judged_mm_later_half){
        cout<<"AMBIGUOUS"<<endl;
    } else if (judged_mm_first_half && !judged_mm_later_half){
        cout<<"MMYY"<<endl;
    } else if (!judged_mm_first_half && judged_mm_later_half){
        cout<<"YYMM"<<endl;
    } else {
        cout<<"NA"<<endl;
    }
    return 0;
}
