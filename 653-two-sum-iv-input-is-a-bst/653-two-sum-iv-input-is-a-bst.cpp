/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    void dfs(TreeNode *root,int k,vector<int>&ans){
        if(root==NULL)
            return;
        dfs(root->left,k,ans);
        ans.push_back(root->val);
        dfs(root->right,k,ans);
    }
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int>ans;
        dfs(root,k,ans);
        int i=0,j=ans.size()-1;
        while(i<j)
        {
            if(ans[i]+ans[j]==k)
                return true;
            else if(ans[i]+ans[j]<k)
                i++;
            else
                j--;
        }
        return false;
    }
};