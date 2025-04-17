//424. Longest Repeating Character Replacement
//https://leetcode.com/problems/longest-repeating-character-replacement/

//Method-1 using sliding window
class Solution {
    public int characterReplacement(String s, int k) {
        int n=s.length();
        int ans=0;

        for(char c='A'; c<='Z'; c++){
            int i=0, j=0, replace=0;

            while(j<n){
                if(s.charAt(j)==c){
                    j++;
                }
                else if(s.charAt(j)!=c && replace<k){
                    j++;
                    replace++;
                }
                else if(s.charAt(i)==c){
                    i++;
                }
                else{
                    i++;
                    replace--;
                }

                ans=Math.max(ans, j-i);
            }
        }

        return ans;
    }
}