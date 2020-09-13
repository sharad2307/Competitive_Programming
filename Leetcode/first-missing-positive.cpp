class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
         for(int i=0;i<nums.size();i++){
      long curr=(long)nums[i]-1;
       while(curr>=0&&curr<nums.size()&&nums[i]!=nums[curr]){
          swap(nums[i],nums[curr]);
          curr=(long)nums[i]-1; 
       }
   }
    
   for(int i=0;i<nums.size();i++){
       if(i+1!=nums[i]) return i+1;
   } 
 return nums.size()+1; 
    }
};