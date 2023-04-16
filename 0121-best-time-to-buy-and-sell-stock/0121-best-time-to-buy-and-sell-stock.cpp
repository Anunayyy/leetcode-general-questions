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