// class Solution {
// public:
    // int diff(vector<int>&nums,i,j){
    //     int dif=nums[j]-nums[i];
    //     if(dif>0)return dif;
    //     else return 0;
    // }
    
//     int maxProfit(vector<int>& nums) {
//         int r=1;
//         int l=0;
//         int profit=0;
//         int maxp=0;
//         while(r<nums.size()){
//             if(nums[l]<nums[r]){
//                 profit=nums[r]-nums[l];
//                 maxp=max(profit,maxp);
//             }
//             else{
//                 l=r;
//                 r=r+1;
//             }
//         }
//         return profit;
//     }
// };
class Solution {
public:
    int maxProfit(vector<int>& price) {
        int l=0;
        int r=1;
        int profit;
        
        int maxp=0;
        
        while(r<price.size()){
            if(price[l]<price[r]){
                profit = price[r]-price[l];
                maxp = max(maxp,profit);
                
            }
            else l =r;
            
            r = r+1;
        }
        return maxp;
    }
};