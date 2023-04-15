class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = 0;
        int max_sum = INT_MIN;
        for(int i=0;i<nums.size();++i){
            if(curr<0) curr=0;
             curr += nums[i];
            
            max_sum = max(max_sum, curr); 
            
        }
        return max_sum;
        
    }
};

/* 
we kept a variable curr. it'll traverse througg the whole array and add it up, if it's positive. then we copare it with mx and store the mx.
*/
