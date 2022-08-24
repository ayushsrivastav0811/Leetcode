class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto it:s){
            if(it=='(' || it=='{' || it=='[')
                st.push(it);
            else{ 
                if(st.size()==0)
                    return false;
                else{ 
                    char ch=st.top();
                    st.pop();
            if((it==')' && ch=='(') || (it==']' && ch=='[') ||
               (it=='}' && ch=='{'))
                continue;
               else
               return false;
                }
            }
        }
               if(st.size()==0)
                 return true;
                     return false;
    }
};