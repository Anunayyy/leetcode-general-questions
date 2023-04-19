class Solution {
public:
      int uniquePaths(int m, int n) {
      int dp[m][n];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0||j==0)
                    dp[i][j]=1;
                else
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
    }
};

/*class Solution {
public:
    int solve(int m,int n,int r,int c,vector<vector<int>>& dp){
        if(r == m-1 || c == n-1)return 1;
        if(dp[r][c] != 0)return dp[r][c];
        dp[r][c] = solve(m,n,r+1,c,dp)+solve(m,n,r,c+1,dp);
        return dp[r][c];
    }
    
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,0));
        return solve(m,n,0,0,dp);
    }
};*/