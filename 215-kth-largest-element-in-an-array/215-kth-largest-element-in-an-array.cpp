class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int size=nums.size();
//         nlogn approach
        // sort(nums.begin(),nums.end());
        // return nums[size-k];
        priority_queue<int,vector<int>,greater<int>>q;
        for(int i=0;i<size;i++){
           q.push(nums[i]);
            if(q.size()>k){
                q.pop();
            }
        }
        return q.top();
    }
};