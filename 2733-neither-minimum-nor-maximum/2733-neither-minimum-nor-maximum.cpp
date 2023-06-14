class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        
        int mn = 101;
        int mx = 0;
        
        for(auto x:nums){
            mn = min(x,mn);
            mx = max(x,mx);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=mn and nums[i]!=mx) return nums[i];
        }
        return -1;
        
    }
};