class Solution {
public:
    int func(int i, int j, vector<vector<int>> &dp, int m, int n, vector<vector<int>>& grid)
    {
        if(i==0&&j==0)
        {
            return grid[0][0];
        }
        if(i<0||j<0||i>=m||j>=n)
        {
            return INT_MAX;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        int c=grid[i][j]+min(func(i-1,j,dp,m,n,grid),func(i,j-1,dp,m,n,grid));
        dp[i][j]=c;
        return c;
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n,-1));
        return func(m-1,n-1,dp,m,n,grid);
    }
};