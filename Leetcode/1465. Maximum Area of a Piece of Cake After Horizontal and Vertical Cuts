class Solution {
public:
    int getMaxDiff(vector<int>& v, int len) {
        sort(v.begin(), v.end());
        int max_diff = v[0];
        
        for (int i = 1; i < v.size(); i++)
            max_diff = max(max_diff, v[i]-v[i-1]);
        
        max_diff = max(max_diff, len - v.back());
        return max_diff;
    }
    
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        return (long)getMaxDiff(horizontalCuts, h) * getMaxDiff(verticalCuts, w) % 1000000007;
    }
};
