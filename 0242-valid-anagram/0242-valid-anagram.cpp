class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;
        
        if(s.size()!=t.size()) return false;
        
        for(auto x:s){
            mp[x]++;
        }
        for(auto y:t){
            mp[y]--;
        }
        for(auto x:mp){
            if(x.second!=0) return false;
        }
        
        return true;
        
    }
};