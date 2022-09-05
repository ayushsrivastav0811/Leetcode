class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1,i=digits.size()-1;
        while(i>=0){
            if(digits[i]==9 && carry)
            {  
                digits[i]=0;
                carry=1;
                 i--;
            }
            else{
                digits[i]+=1;
                carry=0;
                i--;
               return digits;
                
            }
        }
        digits[0]=1;
        digits.push_back(0);
        return digits;
       
    }
};