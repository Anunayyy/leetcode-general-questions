class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n = nums.size();
        
        if(n<=2) return -1;
        //vector
        /*sort(nums.begin(),nums.end());
        
        return nums[n-2];*/
        
        priority_queue<int>pq;
        
        for(auto x:nums){
            pq.push(x);
            }
        pq.pop();
        
        return pq.top();
        
        
        
        
        
        
    }
};