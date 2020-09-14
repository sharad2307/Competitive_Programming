class Solution {
public:
    int numMatchingSubseq(string S, vector<string>& words) {
        int ans=0;
        unordered_map<string,int>un;
        for(int i=0;i<words.size();i++)un[words[i]]++;
        for(auto i:un){
            string temp=i.first;
            int x=0;int j=0;
            while (j < S.size() && x < temp.size()) 
            {
            if (S[j] == temp[x]) {
                j++; x++;
            } else 
            {
                j++;
            }
        }
            if(x==temp.size())
            {
                ans+=i.second;
            }
             
        }    
        return ans;
    }
};