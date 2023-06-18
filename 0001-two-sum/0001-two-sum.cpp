/*class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a=0;
        int b=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    a=i;
                    b=j;
                }
            }
        }
        return {a,b};
    }
};*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int n= nums.size();
        
        for(int i=0; i<n; i++){
            if (mp.find(target-nums[i]) != mp.end()){ 
                
                return {mp[target-nums[i]],i};
            }
            
            mp[nums[i]]=i;
        }
        return {};
    }
};