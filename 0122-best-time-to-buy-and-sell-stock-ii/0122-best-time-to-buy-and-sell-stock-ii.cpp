class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int n =prices.size();
        for(int i=1;i<n;i++){
            if(prices[i]>prices[i-1]){
                profit+=max(0,prices[i]-prices[i-1]);
            }
        }
        
        return profit;
        
    }
};
    
// class Solution {
//     public int maxProfit(int[] prices) {
//         int len = prices.length;
//         int ans = 0;

//         for (int i = 1; i < len; i++){
//             ans += Math.max(0, prices[i] - prices[i - 1]);
//         }
//         return ans;
//     }
// }