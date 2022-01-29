class Solution {
public:
    int up(int m,int n,int i,int j,vector<vector<int>> &dp){
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(i==m-1 and j==n-1){
            return 1;
        }
        if(i>=m || j>=n){
            return 0;
        }
        int so1 = up(m,n,i+1,j,dp);
        int so2 = up(m,n,i,j+1,dp);
        dp[i][j]=so1+so2;
        return so1+so2;

    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return up(m,n,0,0,dp);
    }
};