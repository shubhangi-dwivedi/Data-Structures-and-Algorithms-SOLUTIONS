//1400. Construct K Palindrome Strings
//https://leetcode.com/problems/construct-k-palindrome-strings/description/

//Method-1 using char frequency count
class Solution {
public:
    bool canConstruct(string s, int k) {
        int n=s.length();

        if(n<k){
            return false;
        }

        vector<int> freq(26,0);
        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
        }

        int oddCount=0;
        for(int i=0;i<26;i++){
            if(freq[i]%2!=0){
                oddCount++;
            }
        }

        if(oddCount>k){
            return false;
        }

        return true;
    }
};