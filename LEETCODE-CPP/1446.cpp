//1446. Consecutive Characters

class Solution {
public:
    int maxPower(string s) {
        int n=s.length(),count=0,max1=0;
        
        if(n==1)
            return 1;
        
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1])
            {
                count++;
                max1=max(max1,count);
            }
            else
                count=0;
        }
        return max1+1;
    }
};