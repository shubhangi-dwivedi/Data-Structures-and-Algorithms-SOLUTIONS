//387. First Unique Character in a String

//method 1
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> m;
        int n=s.length();
        
        for(int i=0;i<n;i++)
            m[s[i]]++;
        
        for(int i=0;i<n;i++)
            if(m[s[i]]==1)
                return i;
        
        return -1;
    }
};


//method 2
class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> fq(26,0);
        
        for(int i=0;i<s.length();i++)
            fq[s[i]-'a']++;
        
        for(int i=0;i<s.length();i++)
            if(fq[s[i]-'a']==1)
                return i;
        
        return -1;
    }
};