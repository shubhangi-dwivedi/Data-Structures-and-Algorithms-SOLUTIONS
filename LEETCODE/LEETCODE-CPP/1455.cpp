//1455. Check If a Word Occurs As a Prefix of Any Word in a Sentence
//https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int m=sentence.size(), n=searchWord.size();
        
        int i=0, j=0;
        int count=0;
        while(i<m){
            if(sentence[i]==searchWord[j]){
                while(i<m && j<n && sentence[i]==searchWord[j]){
                    i++,j++;
                }
                if(j==n){
                    return count+1;
                }
                else{
                    j=0;
                }
            }
            else{
                while(i<m && sentence[i]!=' '){
                    i++;
                }
                if(sentence[i]==' '){
                    count++;
                }
               i++; 
            }
        }
        
        return -1;
    }
};