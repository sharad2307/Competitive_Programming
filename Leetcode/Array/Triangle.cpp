class Solution {
public:
	int minimumTotal(vector<vector<int>>& triangle) {
		int n=triangle.size();
		if(n==1)
			return triangle[0][0];
		vector dp(triangle[n-1]);
		for(int row=n-2;row>=0;row--)
		{
			int s=triangle[row].size();
			for(int col=0;col<s;col++)
			{
				dp[col]= triangle[row][col] + min(dp[col],dp[col+1]);
			}
		}
		return dp[0];
	}
};