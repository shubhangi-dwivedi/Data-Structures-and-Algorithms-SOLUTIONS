//242. Valid Anagram


//Method 1 (using unordered map)
class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int flag=0;
        unordered_map<char,int> m;
        
        if(s.length()!=t.length())
            return false;
        
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
            m[t[i]]--;
        }
    
        for(auto i: m)
            if(i.second)
                return 0;
        
        return 1;
    }
};


//Method 2 (using sorting)
class Solution {
public:
    bool isAnagram(string s, string t) {
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        if(s==t)
            return 1;
        
        return 0;
        
    }
};

//Method 3 (using sorting)
class Solution {
public:
    bool isAnagram(string s, string t) {
    
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        return s==t;
        
    }
};