class Solution {
public:
    int maxProfit(vector<int>& a) {
        int n=a.size();
        int minn=INT_MAX;
        int profit=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<minn)
                minn=a[i];
            else if(a[i]-minn > profit)
                profit=a[i]-minn;
        }
       return profit;
    }
};