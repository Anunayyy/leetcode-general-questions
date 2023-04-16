class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>c(nums.size(),0);
        int ans=0;
        for(int i=0;i<nums.size();i++){
            c[nums[i]]++;
        }
        
        for(int i=0;i<nums.size();i++){
            if(c[i]>1){
                ans = i;
            }
        }
        return ans;
        
    }
};