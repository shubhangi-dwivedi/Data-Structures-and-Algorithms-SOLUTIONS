//2124. Check if All A's Appears Before All B's

class Solution {
public:
    bool checkString(string s) {
        int l=s.length();
        int flag=0;
        
        if(l==1)
            return true;
        
        for(int i=0;i<l-1;i++){
            if(s[i]=='b' && s[i+1]=='a'){
                flag=1;
                break;
            }
        }
        
        if(flag)
            return false;
        else
            return true;
    }
};