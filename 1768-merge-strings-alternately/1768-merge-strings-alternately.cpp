class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        int j=0;
        string ans="";
        
        int m=word1.size();
        int n=word2.size();
        
        while(i<m and j<n){
            ans.push_back(word1[i]);
            ans.push_back(word2[j]);
            i++;
            j++;
            
                
            
        }
        while(j<n){
            ans.push_back(word2[j]);
            j++;
        }
        while(i<m){
            ans.push_back(word1[i]);
            i++;
        }
        
        return ans;
    }
};