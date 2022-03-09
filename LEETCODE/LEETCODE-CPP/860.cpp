//860. Lemonade Change
//https://leetcode.com/problems/lemonade-change/

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n=bills.size();
        
        int m5=0,m10=0;
        for(int i=0;i<n;i++){
            if(bills[i]==5)
                m5++;
                
            else if(bills[i]==10){
                m10++;
                m5--;
                if(m5<0)
                    return false;
            }
            
            else{
                if(m5>0 && m10>0)
                    m5--,m10--;
                else if(m5>=3)
                    m5-=3;
                else
                    return false;
            }
        }
        
        return true;
    }
};