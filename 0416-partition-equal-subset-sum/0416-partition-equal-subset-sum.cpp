class Solution
{
    bool dfs(int index, int target, vector<int> &nums, vector<vector< int>> &dp)
    {
        if (target == 0)
            return true;
        if (index == 0)
            return target == nums[0];
        if (dp[index][target] != -1)
            return dp[index][target];
        int nottake = dfs(index - 1, target, nums, dp);
        int take = false;
        if (nums[index] <= target)
            take = dfs(index - 1, target - nums[index], nums, dp);

        return dp[index][target] = nottake | take;
    }
    public:
        bool canPartition(vector<int> &nums)
        {
            int sum = 0;
            for (auto i: nums)
                sum += i;
            if (sum % 2)
                return false;
            int target = sum / 2;
            vector<vector < int>> dp(nums.size()+1, vector<int> (target + 1, -1));

            return dfs(nums.size() - 1, target, nums, dp);
        }
};