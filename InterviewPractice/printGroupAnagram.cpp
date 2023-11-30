#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

void printAnagramsTogether(vector<string>& str){
    map<string, vector<string>> mp;
    for(auto s : str){
        string st = s;
        sort(st.begin(), st.end());
        mp[st].push_back(s);
    }
    
    for(auto it = mp.begin(); it != mp.end(); it++){
        for( auto word : it->second){
            cout << word << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<string> str = { "cat", "dog", "tac", "god", "act" };
    
    printAnagramsTogether(str);

    return 0;
}
