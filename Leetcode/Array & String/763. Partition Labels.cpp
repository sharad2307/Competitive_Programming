class Solution {
public:
  vector<int> partitionLabels(string s) {
        vector<int> last(26, 0);
        for(int i=0; i<s.length(); i++) {
            last[s[i] - 'a'] = i;
        }
        
        vector<int> ans;
        int st = 0, en = 0;
        
        for(int i=0; i<s.length(); i++) {
            en = max(en, last[s[i] - 'a']);
            if(i == en) {
                ans.push_back(en - st + 1);
                st = i + 1;
            }
        }
        
        return ans;
    }
};