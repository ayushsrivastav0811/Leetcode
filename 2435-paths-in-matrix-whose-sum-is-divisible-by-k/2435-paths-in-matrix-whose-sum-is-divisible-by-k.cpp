class Solution {
public:

        int numberOfPaths(vector<vector<int>>& g, int k) {
    int m = g.size(), n = g[0].size();
    vector<vector<int>> ra(n + 1, vector<int>(k + 1)), rb = ra;
    rb[1][0] = 1;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j)
            for (int l = 0; l < k; ++l)
                ra[j + 1][(l + g[i][j]) % k] = (ra[j][l] + rb[j + 1][l]) % 1000000007;
        swap(ra, rb);
    }
    return rb[n][0];
        }
    
};