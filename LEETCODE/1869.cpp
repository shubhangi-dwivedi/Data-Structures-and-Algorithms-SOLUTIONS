//1869. Longer Contiguous Segments of Ones than Zeros

class Solution {
public:
    bool checkZeroOnes(string s) {
        
        int count0=0,count1=0,max0=0,max1=0,n=s.length();
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                count1++;
                count0=0;
                max1=max(max1,count1);
            }
            else
            {
                count0++;
                count1=0;
                max0=max(max0,count0);
            }
        }
        
        return max1>max0;
        
    }
};