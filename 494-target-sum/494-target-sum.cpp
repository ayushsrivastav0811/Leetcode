class Solution {
    int dfs(int index,vector<int>& nums , int target){
        if(index < 0 )
            return target==0;
        
        int postive=dfs(index-1,nums,target-nums[index]);
        int negative=dfs(index-1,nums,target+nums[index]);
          return postive+negative;
    }
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        return dfs(n-1,nums,target);
    }
};