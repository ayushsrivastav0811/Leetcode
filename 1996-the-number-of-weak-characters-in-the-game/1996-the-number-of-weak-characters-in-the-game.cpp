class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& p) {
        sort(p.begin(), p.end(), [](const auto& a, const auto& b) {
            return a[0]==b[0] ? a[1]>b[1] : a[0]<b[0]; 
        });
        int ans = 0;
        int n = p.size();
        int mx = p[n-1][1];
        for(int i=n-2; i>=0; --i) {
            if(p[i][1]<mx) ans++;
            mx = max(mx, p[i][1]);
        }
     return ans;
    }
};