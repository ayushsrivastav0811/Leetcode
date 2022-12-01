class Solution
{
    public:
        bool halvesAreAlike(string s)
        {
            string str1, str2;
            int size = s.size();
            str1 = s.substr(0, size / 2);
            str2 = s.substr(size / 2 , size);
            int count1 = 0, count2 = 0;
            cout<<str1<<"  "<<str2;
            for (int i = 0; i < size / 2; i++)
            {
                if (str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u' || str1[i] == 'A' || str1[i] == 'E' || str1[i] == 'I' || str1[i] == 'O' || str1[i] == 'U')
                    count1++;
                if (str2[i] == 'a' || str2[i] == 'e' || str2[i] == 'i' || str2[i] == 'o' || str2[i] == 'u' || str2[i] == 'A' || str2[i] == 'E' || str2[i] == 'I' || str2[i] == 'O' || str2[i] == 'U')
                    count2++;
            }
            return count1==count2;
        }
};