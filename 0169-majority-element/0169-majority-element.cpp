class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>umap;
        int ans;
        
        for(auto x:nums){
            umap[x]++;
        }
        
        for(auto x:umap){
            if(x.second>(nums.size()/2)) ans = x.first;
            
        }
        return ans;
        
    }
};