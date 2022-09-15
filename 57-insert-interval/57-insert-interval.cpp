class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        if(intervals.size()==0)
        {
            ans.push_back(newInterval);
            return ans;
        }
//         int n=intervals.size();
//     for(int i=0;i<n;i++){
//             if(intervals[i][1]<newInterval[0])
//             {
//                 ans.push_back(interval[i]);
//             }
//           else if(intervals[i][0]>newInterval[1]){
//               ans.push_back(interval[i]);
//           }
//         else{
            
//         }
//         }
        int n=intervals.size();
        int x=newInterval[0],y=newInterval[1],flag=0;
        for(int i=0;i<n;i++)
        {
            if(intervals[i][0]<=newInterval[0] && intervals[i][1]>=newInterval[0] && x==newInterval[0])
                x=intervals[i][0];
            if(intervals[i][0]<=newInterval[1] && intervals[i][1]>=newInterval[1])
                y=intervals[i][1];
        }
        for(int i=0;i<n;i++)
        {
            if(intervals[i][1]<x)
                ans.push_back({intervals[i][0],intervals[i][1]});
            else if(intervals[i][0]>y)
                ans.push_back({intervals[i][0],intervals[i][1]});
            else if(flag==0)
            {
                ans.push_back({x,y});
                flag=1;
            }
        }
        if(flag==0)
        {
            ans.push_back(newInterval);
            sort(ans.begin(),ans.end());
        }
        return ans;
    }
};