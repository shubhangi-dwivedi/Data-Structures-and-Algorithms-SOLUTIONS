//383. Ransom Note
//https://leetcode.com/problems/ransom-note/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char,int>m1;
        
        for(int i=0;i<magazine.size();i++)
            m1[magazine[i]]++;
        
        for(auto i: ransomNote)
            if(!m1[i])
                return false;
            
            else
                m1[i]--;
        
        return true;
        
    }
};