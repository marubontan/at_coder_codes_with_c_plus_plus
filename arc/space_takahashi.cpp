#include <iostream>
#include <vector>
#include <boost/algorithm/string.hpp>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    vector<string> words;
    boost::split(words, s, boost::is_space());
    int word_size = words.size();
    for (int i=0;i<word_size;i++){
        if (words[i] == "Left"){
            cout << "<";
        } else if (words[i] == "Right"){
            cout << ">";
        } else {
            cout << "A";
        }
        if (i != word_size - 1){
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}