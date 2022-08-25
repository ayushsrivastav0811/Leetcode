class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> map(26);
        for (char mchar : magazine)
            ++map[mchar];
        for (char rchar : ransomNote) 
            if (--map[rchar] < 0)
            return false;
        
        return true;
    }
};