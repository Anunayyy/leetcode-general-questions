#include <vector>
#include <algorithm>

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        int maxProduct = nums[0];
        int minProduct = nums[0];
        int ans = maxProduct;

        for (int i = 1; i < n; i++) {
            if (nums[i] < 0)
                swap(maxProduct, minProduct); 

            maxProduct = max(nums[i], maxProduct * nums[i]);
            minProduct = min(nums[i], minProduct * nums[i]);

            ans = max(ans, maxProduct);
        }

        return ans;
    }
};

