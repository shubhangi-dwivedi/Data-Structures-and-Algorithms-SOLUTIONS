//2000. Reverse Prefix of Word
//https://leetcode.com/problems/reverse-prefix-of-word/

//Method-1 (using 2 pointers)
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int l=word.length();
        
        int x=0;
        for(int i=0;i<l;i++)
            if(word[i]==ch){
                x=i;
                break;
            }
        
        
        if(x==0)
            return word;
        
        int j=0;
        while(j<=x){
            swap(word[x],word[j]);
            x--,j++;
        }
        
        return word;
    }
};


//Method- 2 (using reverse())
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int l=word.length();
        
        int x=0;
        for(int i=0;i<l;i++)
            if(word[i]==ch){
                x=i;
                break;
            }
        
        
        reverse(word.begin(),word.begin()+x+1);
        
        return word;
    }
};