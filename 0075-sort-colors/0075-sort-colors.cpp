class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int slow=0;
        int fast=n-1;
        int curr=0;
        
        while(curr<=fast){
            if (nums[curr]==0){
                swap(nums[slow],nums[curr]);
                slow++;
                curr++;
            }
            else if (nums[curr]==2){
                swap(nums[fast],nums[curr]);
                fast--;
            }
            else if (nums[curr]==1) curr++;
        }
        
    }
};

/*class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size()-1;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};*/