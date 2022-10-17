//1832. Check if the Sentence Is Pangram
//https://leetcode.com/problems/check-if-the-sentence-is-pangram/description/

//Method-1 (using map)
class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int> m;
        
        for(int i=0;i<sentence.length();i++)
            m[sentence[i]]++;
        
        if(m.size()==26)
            return true;
        
        return false;
    }
};


//Method-2 (using set)
class Solution {
public:
    bool checkIfPangram(string s) {
        unordered_set<char>s2;
        for(int i=0;i<s.length();i++)
            s2.insert(s[i]);

        if(s2.size()==26)
            return true;

        return false;
    }
};


//Method-3 (using array)
class Solution {
public:
    bool checkIfPangram(string s) {
        vector<int> v(26,0);

        for(int i=0;i<s.size();i++)
            if(v[s[i]-'a']==0)
                v[s[i]-'a']++;
        
        for(int i=0;i<v.size();i++)
            if(v[i]!=1)
                return false;

        return true;
    }
};