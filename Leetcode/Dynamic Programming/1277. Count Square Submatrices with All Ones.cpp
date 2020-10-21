class Solution {
public:
    int countSquares(vector<vector<int>>& a) {
         if(a.size()==0)
            return 0;
        
        for(int i=1;i<a.size();i++)
        {
            for(int j=1;j<a[0].size();j++)
            {
                if(a[i][j]==1)
                    a[i][j] = 1 + min(a[i-1][j], min(a[i][j-1],a[i-1][j-1]));
            }
        }
        
        int ans=0;
        for(int i=0;i<a.size();i++)
        {
            for(int j=0;j<a[0].size();j++)
            {
                ans += a[i][j];   
            }
        }
        
        return ans;
    }
};