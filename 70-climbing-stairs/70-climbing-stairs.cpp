class Solution {
private:
    int solve(int n, vector<int>&dp)
    {
         if(n<0)
            return 0;
        if(n==0)
            return 1;
        if(dp[n]!=-1)
            return dp[n];
        int one=climbStairs(n-1);
        int two=climbStairs(n-2);
        return dp[n]=one+two;
    }
public:
    
    int climbStairs(int n) {
          vector<int>dp(n+1,0);
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};