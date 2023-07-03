class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        
        int curMax = nums[0];
        int curMin = nums[0];
        int ans = curMax;
        
        for (int i = 1; i < n; i++) {
            int temp = curMax;
            curMax = max(temp * nums[i], max(curMin * nums[i], nums[i]));
            curMin = min(temp * nums[i], min(curMin * nums[i], nums[i]));
            
            ans = max(ans, curMax);
        }
        
        return ans;
    }
};
