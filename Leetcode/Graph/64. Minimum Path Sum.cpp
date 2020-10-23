class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int h=grid.size();
        int w=grid[0].size();
        int dp[h+1][w+1];
        
        for(int row=0;row<h;row++)
        {
            for(int col=0;col<w;col++)
            {
                if(row==0 && col==0)
                    dp[row][col]=grid[0][0];
                else
                {
                    dp[row][col]=grid[row][col]+min((row==0?INT_MAX:dp[row-1][col]),(col==0?INT_MAX:dp[row][col-1]));
                    
                }
            }
        }
        
        return dp[h-1][w-1];
    }
};