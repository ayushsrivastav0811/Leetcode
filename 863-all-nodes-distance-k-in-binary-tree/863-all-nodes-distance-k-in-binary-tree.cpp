class Solution
{
    void parent_mapping(TreeNode *root, unordered_map<TreeNode*, TreeNode*>&mp)
    {
        if (root == NULL)
            return;
        queue<TreeNode*> qq;
        qq.push(root);
        while (qq.empty() == false)
        {
            int size = qq.size();

            for (int i = 0; i < size; i++)
            {
                TreeNode *curr = qq.front();
                qq.pop();
                if (curr->left != NULL)
                {
                    qq.push(curr->left);
                    mp[curr->left] = curr;
                }
                if (curr->right != NULL)
                {
                    qq.push(curr->right);
                    mp[curr->right] = curr;
                }
            }
        }
    }
    public:
        vector<int> distanceK(TreeNode *root, TreeNode *target, int k)
        {
            unordered_map<TreeNode*, TreeNode*> mp;
            parent_mapping(root, mp);
            queue<TreeNode*> q;
            q.push(target);
            int c = 0;
            unordered_map<TreeNode*, bool> vis;
            vis[target] = true;
            while (q.empty() == false)
            {
                int size = q.size();
                if (c++ == k)
                    break;
                for (int i = 0; i < size; i++)
                {
                    TreeNode *curr = q.front();
                    q.pop();
                    if (curr->left != NULL && !vis[curr->left])
                    {
                        q.push(curr->left);
                        vis[curr->left] = true;
                    }
                    if (curr->right != NULL && !vis[curr->right])
                    {
                        q.push(curr->right);
                        vis[curr->right] = true;
                    }
                    if(mp[curr] && !vis[mp[curr]])
                    {
                        q.push(mp[curr]);
                        vis[mp[curr]]=true;
                    }
                }
            }
            vector<int> ans;
            while (q.empty() == false)
            {
                ans.push_back(q.front()->val);
                q.pop();
            }
            return ans;
        }
};