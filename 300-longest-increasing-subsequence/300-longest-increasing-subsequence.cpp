class Solution
{
    int dfs(int index, int prev, vector<int> &nums, vector<vector< int>> &dp)
    {
       	//         base case
        if (index == nums.size())
            return 0;
        if (dp[index][prev + 1] != -1)
            return dp[index][prev + 1];
        int not_take = 0 + dfs(index + 1, prev, nums, dp);

        int take = INT_MIN;
        if (prev == -1 || nums[index] > nums[prev])
            take = 1 + dfs(index + 1, index, nums, dp);

        return dp[index][prev + 1] = max(not_take, take);
    }
    public:
        int lengthOfLIS(vector<int> &nums)
        {
            vector<int> arr;
            arr.push_back(nums[0]);
            int len = 1;
            for (int i = 1; i < nums.size(); i++)
            {
                if (nums[i] > arr.back())
                {
                    arr.push_back(nums[i]);
                    len++;
                }
                else
                {
                    auto ind = lower_bound(arr.begin(), arr.end(), nums[i]);
                    *ind = nums[i];
                }
            }
            return len;
        }
};