//942. DI String Match
//https://leetcode.com/problems/di-string-match/

class Solution {
public:
    vector<int> diStringMatch(string s) {
        int l=s.size();
        
        vector<int> res(l+1);
        int i=0, low=0, high=l;
        while(i<l){
            if(s[i]=='I'){
                res[i]=low;
                low++;
            }
            else{
                res[i]=high;
                high--;
            }
            
            i++;
        }
        res[i]=low;
        
        return res;
    }
};

