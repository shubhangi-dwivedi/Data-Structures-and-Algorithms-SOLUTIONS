//409. Longest Palindrome
//https://leetcode.com/problems/longest-palindrome/

//Method-1 (Hashmap)
class Solution {
public:
    int longestPalindrome(string s) {
        int l=s.length();
        
        unordered_map<char,int> m;
        for(int i=0;i<l;i++)
            m[s[i]]++;
        
        
        int res=0;
        vector<int>odd_count;
        for(auto i:m){
            if(i.second%2==1)
                odd_count.push_back(i.second); //pushing odd char count in vector
            else
                res+=i.second; //adding even char count
        }
        
        if(odd_count.size()!=0){
            res+=odd_count[0]; //adding 0th index odd_count as it can form palindrome
            
            /*if odd_count.size()>1, then odd_count[i]-1 will be done before adding 
            for making odd char even for palindrome formation*/
            for(int i=1;i<odd_count.size();i++)
                res+=(odd_count[i]-1);
        }
        
        return res;
    }
};

