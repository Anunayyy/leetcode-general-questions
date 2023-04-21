class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        
        int m = g.size();
        int n= s.size();
        int i=0;
        int j=0;
        int count=0;
        
        while(i<m && j<n){
            if(g[i]<=s[j]){
                count++;
                i++;
            }
            j++;
        }
        return count;
        
    }
};