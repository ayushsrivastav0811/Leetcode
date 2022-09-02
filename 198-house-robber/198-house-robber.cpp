class Solution {
    int maxrob(int n,vector<int>&nums,vector<int>&dp)
    {
        if(n<0)
         return 0;
        if(dp[n]!=-1)
            return dp[n];
        int include=nums[n]+maxrob(n-2,nums,dp);
        int exclude=maxrob(n-1,nums,dp);
        return dp[n]= max(include,exclude);
   }
public:
    int rob(vector<int>& nums) {
      
        int n=nums.size();
          vector<int>dp(n,0);
        if(n==1)
            return nums[0];
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++)
        {
            dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }
        return dp[n-1];
    }
};