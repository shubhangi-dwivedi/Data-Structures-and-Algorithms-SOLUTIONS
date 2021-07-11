//38. Count and Say

class Solution {
public:
    string countAndSay(int n) {
        string s;
        
        if(n==1)
            return "1";
        
        string temp="1";
        
        for(int i=2;i<=n;i++)
        {
            string x="";
            int j=0,c=1;
            
            while(j<temp.size())
            {
                while(temp[j]==temp[j+1])
                {
                    c++;
                    j++;
                }
            
                x=x+to_string(c)+temp[j];
                c=1;
                j++;
            }
            temp=x;
        }
        return temp;
    }
};