class Solution
{
    public:
        string reverseWords(string s)
        {
          stringstream str(s);
            string ans="",word;
            while(str>>word){
                ans=word+" "+ans;
                
            }
            return ans.substr(0,ans.size()-1);
        }
};