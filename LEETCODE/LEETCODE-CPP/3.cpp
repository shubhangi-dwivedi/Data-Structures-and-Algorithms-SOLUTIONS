//3. Longest Substring Without Repeating Characters
//https://leetcode.com/problems/longest-substring-without-repeating-characters/

//Method-1
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


//Method-2 using sliding window
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        set<char> st;
        
        int j=0, ans=0;
        for(int i=0;i<n;i++){
            while(st.find(s[i])!=st.end()){
                st.erase(s[j]);
                j++;
            }
            
            st.insert(s[i]);
            ans=max(ans,i-j+1);
        }
        
        return ans;
    }
};