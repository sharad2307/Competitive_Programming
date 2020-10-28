class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int it=0;
        
        for(auto i:nums)
        {
            if(i!=0)
            {
                nums[it]=i;
                it++;
            }
        }
        
        for(int i=it;i<n;i++)
            nums[i]=0;
    }
};