class Solution {
public:
    vector<int> memo;

    
    
    int help(vector<int>& cost,int i){
        if(i<0)return 0;
        
        if(memo[i]!=-1)return memo[i];
        
        if(i==0||i==1) memo[i]=cost[i];
        
        else memo[i] = cost[i] + min(help(cost,i-1),help(cost,i-2));
        
        return memo[i];
    }
        
        
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int d=1000;
        memo.resize(d,-1);
        
        return min(help(cost,n-1),help(cost,n-2));
        
        
    }
};