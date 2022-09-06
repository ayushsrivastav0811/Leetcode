class Solution {
public:
    // vector<int>q (10,-1);
    int check(int row,int col,vector<int>&q){
        for(int i=0;i<row;i++){
            int prow=i;
            int pcol=q[i];
            if(pcol==col || abs(col-pcol)==abs(row-prow)){
                return 0;
            }
           
        }
         return 1;
    }
    int dfs(int level,int n,vector<int>&q){
        // if we reach the end
        if(level==n)
        {
            return 1;
        }
        int ans=0;
        for(int col=0;col<n;col++){
            if(check(level,col,q)){
                q[level]=col;
                ans+=dfs(level+1,n,q);
                q[level]=-1;
            }
        }
        return ans;
    }
    int totalNQueens(int n) {
        vector<int>q(n,-1);
        return dfs(0,n,q);
    }
};