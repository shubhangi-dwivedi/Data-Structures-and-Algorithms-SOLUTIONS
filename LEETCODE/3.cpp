//3. Longest Substring Without Repeating Characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n=s.length(),maxLen=0,start=-1;
        vector<int> v(256,-1);
        
        for(int i=0;i<n;i++){
            if(v[s[i]]>start)
                start=v[s[i]];
            
            v[s[i]]=i;
            maxLen=max(maxLen,i-start);
        }
        return maxLen;
    }
};