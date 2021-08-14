//1768. Merge Strings Alternately

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        int l1=word1.length(),l2=word2.length();
        string res="";
        
        int i=0,j=0;
        while(i<l1 || j<l2){
            
            if(i<l1){
                res+=word1[i];
                i++;
            }
            
            if(j<l2){
                res+=word2[j];
                j++;
            }
        }
    
        return res;
    }
};