
vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // APPROACH : map
        map<string, vector<string> >mp;
    // create map for each same type of string by sorting them
        for(auto str: strs){
            string s = str; 
            sort(s.begin(),s.end()); //sorting the string and then push into map;
            mp[s].push_back(str); // npush the same string which a=has same order anagram
        }

        vector<vector<string> >ans;
        // return the map to a string vector
        for(auto it=mp.begin(); it != mp.end(); it++){
            ans.push_back(it->second);
        }
        return ans;
    }