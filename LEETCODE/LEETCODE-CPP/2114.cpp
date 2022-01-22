//2114. Maximum Number of Words Found in Sentences
//https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/

class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int n=s.size();
        int count=0;
        int max_count=0;
        
        for(int i=0;i<n;i++){
            string x=s[i];
            for(int j=0;j<x.length();j++){
                if(x[j]==' ')
                    count++;
            }
            max_count=max(max_count,count+1);
            count=0;
        }
        
        return max_count;
    }
};