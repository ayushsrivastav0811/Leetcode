class Solution {
    int cost(int n,vector<int>&nums,vector<int>&dp)
    {
        if(n<0)
            return 0;
        if(n==0 || n==1)
            return nums[n];
       if(dp[n]!=-1)
           return dp[n];
        int onestep=nums[n]+cost(n-1,nums,dp);
        int twostep=nums[n]+cost(n-2,nums,dp);
     return dp[n] = min(onestep,twostep);    
    }
public:
    int minCostClimbingStairs(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return min(cost(n-1,nums,dp),cost(n-2,nums,dp));
    }
};