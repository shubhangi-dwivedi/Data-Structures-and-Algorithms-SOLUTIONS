//424. Longest Repeating Character Replacement
//https://leetcode.com/problems/longest-repeating-character-replacement/

//Method-1 using sliding window
class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        int ans=INT_MIN;

        if(n==1)
            return 1;

        for(char c='A';c<='Z';c++){
            int i=0,j=0,replace=0;
            while(j<n){
                if(s[j]==c){
                    j++;
                }
                else if(s[j]!=c && replace<k){
                    j++,replace++;
                }
                else if(s[i]==c){
                    i++;
                }
                else{
                    i++,replace--;
                }

                ans=max(ans,j-i);
            }
        }

        return ans;
    }
};