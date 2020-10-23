class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int ans = 0;
        int left = 0, n = arr.size();
        for (int i = 0; i < n ; ++i) {
            left = arr[i];
            int right = 0;
            for (int j = i + 1; j < n; ++j) {
                right ^= arr[j];
                if (left == right) {
                   ans += j - i;
                }
            }
        }
        return ans;
    }
};