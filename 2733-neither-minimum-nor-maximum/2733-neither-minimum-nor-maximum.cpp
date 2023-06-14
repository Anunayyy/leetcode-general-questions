class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int mn = 999, mx = 0;
        for (int i = 0; i < nums.size(); i++) {
            mn = min(mn, nums[i]);
            mx = max(mx, nums[i]);
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != mn and nums[i] != mx) {
                return nums[i];
            }
        }
        return -1;
    }
};