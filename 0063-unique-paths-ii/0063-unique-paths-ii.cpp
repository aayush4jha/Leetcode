class Solution {
public:
    int func(int i, int j, vector<vector<int>>&dp, int m, int n, vector<vector<int>> obstacleGrid)
    {
        
        if(i<0||j<0||i>=m||j>=n) return 0;
        if(obstacleGrid[i][j]==1) return 0;
        if(i==0&&j==0) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        int c=func(i-1,j,dp,m,n,obstacleGrid)+func(i,j-1,dp,m,n,obstacleGrid);
        dp[i][j]=c;
        return c;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>> dp(m+1, vector<int> (n+1,-1));
        return func(m-1,n-1,dp,m,n,obstacleGrid);
    }
};