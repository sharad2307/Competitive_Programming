class Solution 
{
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        const int n = nums.size();
        int product = 1;
        int count_zeros = 0;
        int product_of_non_zeros = 1;
        
        for(int x : nums) 
        {
            product *= x;
            if(x == 0) 
            {
                count_zeros++;
            }
            else 
            {
                product_of_non_zeros *= x;
            }
        }
        vector<int> answer(n);
        if(product != 0) 
        {
            for(int i = 0; i < n; i++) 
            {
                answer[i] = product / nums[i];
            }
        }
        else if(count_zeros == 1) 
        {
            for(int i = 0; i < n; i++) 
            {
                if(nums[i] == 0) 
                {
                    answer[i] = product_of_non_zeros;
                }
            }
        }

        return answer;
        
        
    }
};