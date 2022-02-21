//524. Longest Word in Dictionary through Deleting
//https://leetcode.com/problems/longest-word-in-dictionary-through-deleting/


//Method-1 (using sorting and 2 pointers)
class Solution {
public:
    string findLongestWord(string s, vector<string>& dict) {
        int count=0;
        int n=s.length(),max_l=INT_MIN;
        stack<string>stk;
        string ans="";
        
        sort(dict.begin(),dict.end());
        
        for(int i=0;i<dict.size();i++){
            int k=0, word_length=0,j=0;
            string x=dict[i];
            int m=x.length();
            
            if(x==s)
                stk.push(x);
            else{
                while(k<m && j<n){
                    if(s[j]==x[k]){
                        word_length++;
                        k++,j++;
                    }
                    else
                        j++;
                }
                
                if(word_length==m)
                    stk.push(dict[i]);
            }
            
            if(!stk.empty()){
                int stk_l=stk.top().length();
                if(stk_l>max_l){
                    max_l=stk_l;
                    ans=stk.top();
                    cout<<stk.top();
                }
            }
        }
        
        return ans;
    }
};