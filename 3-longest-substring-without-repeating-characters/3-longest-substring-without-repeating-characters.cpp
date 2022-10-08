class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int l=0,r=0;
        int maxi=0;
        while(r<s.size() && l<s.size())
        {
            if(st.find(s[r])==st.end())
            {
                 st.insert(s[r]);
                r++;
                maxi=max(maxi,r-l);
               
            }
            else{
                st.erase(s[l]);
                l++;
            }
        }
        return maxi;
    }
};