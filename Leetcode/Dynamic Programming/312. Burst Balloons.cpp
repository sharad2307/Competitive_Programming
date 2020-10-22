class Solution {
public:
    int maxCoins(vector<int>& a) {
        int n = a.size();
        if (n == 0) {
            return 0;
        }
        a.push_back(1);
        a.insert(a.begin(), 1);
        n = a.size();
        int dp[n+1][n+1];
        
        // cost of multiplying a single matrix = 0
        for (int i = 1; i<=n; i++) {
            dp[i][i] = 0;
        }
        
        for (int L = 2; L<n; L++) {
            for (int i = 1; i<n-L+1; i++) {
                int j = L+i-1;
                dp[i][j] = INT_MIN;
                for (int k = i; k<j; k++) {
                    int q = dp[i][k] + dp[k+1][j] + (a[i-1]*a[k]*a[j]);
                    dp[i][j] = max(dp[i][j], q);
                }
            }
        }
        return dp[1][n-1];
    }
};