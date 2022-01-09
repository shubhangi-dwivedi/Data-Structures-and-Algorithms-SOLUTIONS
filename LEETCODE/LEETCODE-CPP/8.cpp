//8. String to Integer (atoi)

class Solution {
public:
    int myAtoi(string s) {
        
        int i = s.find_first_not_of(' ');
        if(i==string::npos) 
            return 0;
        
        int num_sign=1;
        long res=0;
        
        if(s[i]=='-')
        {
            i++;
            num_sign=-1;
        }
            
        else if(s[i]=='+')
        {
            i++;
            num_sign=1;
        }
        else
            num_sign=1;
        
        while(isdigit(s[i]))
        {
            res=res*10+(s[i]-'0');
            
            if(res*num_sign>INT_MAX)
                return INT_MAX;
            else if(res*num_sign<INT_MIN)
                return INT_MIN;
            
            i++;
        }
        
        return res*num_sign;
        
    }
};