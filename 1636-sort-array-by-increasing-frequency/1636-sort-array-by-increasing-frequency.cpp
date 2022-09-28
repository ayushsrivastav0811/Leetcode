class Solution {
    static bool cmp(pair<int,int>&a,pair<int,int>&b){
        return (a.second==b.second)?a.first>b.first:a.second<b.second;
    }
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        vector<pair<int,int>>pp;
        for(auto x:mp){
            pp.push_back(x);           
        }
        sort(pp.begin(),pp.end(),cmp);
        vector<int>res;
        for(auto x:pp){
            for(int i=0;i<x.second;i++){
                res.push_back(x.first);
            }
        }
        return res;
    }
};