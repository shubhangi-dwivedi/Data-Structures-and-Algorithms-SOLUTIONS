//67. Add Binary

class Solution {
public:
    string addBinary(string a, string b) {
        int l1=a.length(), l2=b.length();
        
        int i=l1-1,j=l2-1;
        
        string s="";
        int x=0;
        
        while(i>=0 ||j>=0 ||x>0){
            if(i>=0){
                x+=a[i]-'0';
                i--;
            }
            if(j>=0){
                x+=b[j]-'0';
                j--;
            }
            
            s+=(x%2)+'0';
            x/=2;
        }
        
        reverse(s.begin(),s.end());
        
        return s;
    }
};