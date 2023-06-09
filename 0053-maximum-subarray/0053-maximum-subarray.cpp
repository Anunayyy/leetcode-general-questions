/*class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n= nums.size();
        int dp[n];
        dp[0]=nums[0];
        
        int maxsum = nums[0];
        for(int i=1;i<n;i++){
            dp[i]=nums[i] + (dp[i-1]>0 ? dp[i-1]:0);
            maxsum = max(maxsum,dp[i]);
        }
        return maxsum;
        
    }
};*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = 0;
        int max_sum = INT_MIN;
        for(int i=0;i<nums.size();++i){
            if(curr<0) curr=0;
            curr += nums[i];
            
            max_sum = max(max_sum,curr);
        }
        return max_sum;
        
        
       
        
    }
};