class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0,right=0,total=0;
        int min_len = INT_MAX;
        //int x =nums.size()+1;
        while(right<nums.size()){
            total +=nums[right];
            right+=1;
            
            while(total>=target){
                min_len=min(min_len,right-left);
                total -=nums[left];
                left+=1;
                
                    
                
            }
            
        }
        if(min_len==INT_MAX) return 0;
        else return min_len;
        
            
        
        
    }
};