class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int res=0,i;
      for(i=1;i<nums.size();i++)
      { 
        nums[i]+=nums[i-1];}
        return nums;
        

    }
};