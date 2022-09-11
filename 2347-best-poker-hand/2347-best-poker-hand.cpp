class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& s) {
        if(s[0] == s[1] && s[1] == s[2] && s[2] == s[3] && s[3] == s[4]) {
            return "Flush";
        }
        sort(ranks.begin(), ranks.end());
        bool flag = false;
        for(int i = 0; i < 4; ++i) {
            if(ranks[i] == ranks[i+1] && ranks[i] == ranks[i+2]) {
                return "Three of a Kind";
            }
            if(ranks[i] == ranks[i+1]) {
                flag = true;
            }    
        }
        if(flag) {
            return "Pair";
        }
        return "High Card";
    }
};