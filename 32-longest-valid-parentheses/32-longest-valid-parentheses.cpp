class Solution
{
    public:
        int longestValidParentheses(string s)
        {
            int maxi = 0;
            for (int i = 0; i < s.size(); i++)
            {
                int count = 0;
                for (int j = i; j < s.size(); j++)
                {
                    if (s[j] == ')')
                        count--;
                    else
                        count++;
                    if (count < 0)
                        break;
                    if (count == 0)
                    {
                        maxi = max(maxi, j - i + 1);
                    }
                }
            }
            return maxi;
        }
};