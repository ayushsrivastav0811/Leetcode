class Solution
{
    public:
        bool canThreePartsEqualSum(vector<int> &arr)
        {
            int sum = 0;
            for (int i = 0; i < arr.size(); i++)
            {
                sum += arr[i];
            }
            if (sum % 3 == 0)
            {
                int req = sum / 3;
               int c=0,s=0;
                for(int i=0;i<arr.size();i++)
                {
                    s+=arr[i];
                    if(s==req){
                        s=0;
                        c++;
                    }
                }
                return c>=3;
            }
            
            return 0;
        }
};