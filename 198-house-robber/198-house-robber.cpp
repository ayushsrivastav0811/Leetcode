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
      
        int n=nums.size()-1;
          vector<int>dp(n+1,-1);
        return maxrob(n,nums,dp);
    }
};