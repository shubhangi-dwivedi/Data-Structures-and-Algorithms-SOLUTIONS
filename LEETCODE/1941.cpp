//1941. Check if All Characters Have Equal Number of Occurrences

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        
        unordered_map<char,int>m;
        int l=s.size();
        for(int i=0;i<l;i++)
            m[s[i]]++;
        
        auto i=m.begin();
        int x=i->second;
        while(i!=m.end())
        {
            if(i->second!=x)
                return false;
            i++;
        }
        return true;
    }
};