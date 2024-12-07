//159. Longest Substring with At Most Two Distinct Characters
//https://leetcode.com/problems/longest-substring-with-at-most-two-distinct-characters/

//Method-1 using hashmap and sliding window
class Solution {
public:
    int lengthOfLongestSubstringTwoDistinct(string s) {
        map<char,int>m;
        int n=s.length();
        int ans=INT_MIN;
        int i=0, j=0;
        
        if(n==1)
            return 1;
        
        while(j<n){
            m[s[j]]++;
            
            while(m.size()>2){
                
                m[s[i]]--;
                
                if(m[s[i]]==0){
                    m.erase(s[i]);
                }
                i++;
            }
            
            ans=max(ans,j-i+1);
            j++;
        }
        
        return ans;
    }
};