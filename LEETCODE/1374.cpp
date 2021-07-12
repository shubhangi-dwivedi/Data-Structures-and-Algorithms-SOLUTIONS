//1374. Generate a String With Characters That Have Odd Counts

class Solution {
public:
    string generateTheString(int n) {
        
        string res="";
        
        if(n%2==0)
        {
            res+="x";
            n--;
        }
        
        for(int i=0;i<n;i++)
            res+="y";
            
        return res;
    }
};