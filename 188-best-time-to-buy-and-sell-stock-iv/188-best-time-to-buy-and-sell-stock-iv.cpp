class Solution {
    int dfs(int index,vector<int>&prices,bool buy,int k, vector<vector<vector<int>>>&dp,int profit)
    {

        if(index==prices.size() || k==0)
            return 0;
        if(dp[index][buy][k]!=-1)
            return dp[index][buy][k];
        if(buy)
            profit= max(-prices[index]+dfs(index+1,prices,0,k,dp,profit),dfs(index+1,prices,1,k,dp,profit));
        else
            profit=max(prices[index]+dfs(index+1,prices,1,k-1,dp,profit),dfs(index+1,prices,0,k,dp,profit));
        
        return dp[index][buy][k]= profit;
    
    }
public:
    int maxProfit(int k, vector<int>& prices) {
        vector<vector<vector<int>>>dp(prices.size(),vector<vector<int>>(2,vector<int>(k+1,-1)));
        return dfs(0,prices,1,k,dp,0);
    }
};