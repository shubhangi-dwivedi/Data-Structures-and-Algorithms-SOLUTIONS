//66. Plus One


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n=digits.size();
        int sum=0,rem=0;
        
        if(n==1 && digits[0]<=8)
        {
            digits[0]+=1;
            return digits;
        }
        
        for(int i=n-1;i>=0;i--)
        {
            if(digits[i]!=9)
            {
                digits[i]++;
                break;
            }
            
            
            if(digits[i]==9 && i!=0)
                digits[i]=0;

            else
            {
                digits[i]=0;
                digits.insert(digits.begin(),1);
            }
        }  
        
        return digits;
        
    }
};