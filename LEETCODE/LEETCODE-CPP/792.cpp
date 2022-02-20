//792. Number of Matching Subsequences
//https://leetcode.com/problems/number-of-matching-subsequences/

//Method-1 (using map and 2 pointer approach)
class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int count=0;
        int n=s.length();
        unordered_map<string,int>m;
        
        for(int i=0;i<words.size();i++)
            m[words[i]]++;
        
        for(auto i:m){
            int k=0, m=i.first.length(), word_length=0,j=0;
            string x=i.first;
            
            if(x.length()>n)
                continue;
            else if(x==s)
                count+=i.second;
            else{
                while(k<m && j<n){
                    if(s[j]==x[k]){
                        word_length++;
                        k++,j++;
                    }
                    else
                        j++;
                }
                if(word_length==x.length())
                    count+=i.second;
            }
            
        }
        
        return count;
    }
};