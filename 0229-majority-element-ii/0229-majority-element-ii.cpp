class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>umap;
        int n=nums.size();
        vector<int>ans;
        
        for(auto x:nums){
            umap[x]++;
        }
        
        for(auto x:umap){
            if(x.second>n/3) ans.push_back(x.first);
        }
        return ans;
    }
};