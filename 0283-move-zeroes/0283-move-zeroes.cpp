// class Solution {
// public:
//     void swap(vector<int>&nums,int i,int j){
//         int temp=nums[j];
//         nums[j]=nums[i];
//         nums[i]=temp;
//     }
//     void moveZeroes(vector<int>& nums) {
//         int i=0;
//         int j=1;
//         while(j<nums.size()){
//             if(nums[i]==0 and nums[j]!=0)swap(nums,i,j);
//             i++;
//             j++;
//         }
        
//     }
// };
#include <vector>

class Solution {
public:
    void swap(vector<int>& nums, int i, int j) {
        int temp = nums[j];
        nums[j] = nums[i];
        nums[i] = temp;
    }

    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int j = 0;
        while (j < nums.size()) {
            if (nums[j] != 0) {
                swap(nums, i, j);
                i++;
            }
            j++;
        }
    }
};
