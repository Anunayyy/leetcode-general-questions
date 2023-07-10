class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int x=0;x<nums.size();x++){
            if(mp.find(target-nums[x])!=mp.end()){
                return{mp[target-nums[x]],x};
            }
            mp[nums[x]]=x;
            
            
        }
        return {};
        
    }
};