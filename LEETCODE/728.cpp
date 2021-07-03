//728. Self Dividing Numbers

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        int x=0,rem=0,flag=0;
        vector<int> v;
    
        for(int i=left;i<=right;i++)
        {
            x=i; 
            flag=0;
                while(x)
                {
                    rem=x%10;
                    if(rem==0 || i%rem != 0)
                    {
                        flag=1;
                        break;
                    }
                    x=x/10;
                }
    
            if(flag==0)
                v.push_back(i);
        }
        
        return v;
    }
};