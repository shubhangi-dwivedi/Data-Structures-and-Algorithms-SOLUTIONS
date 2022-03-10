//415. Add Strings
//https://leetcode.com/problems/add-strings/

class Solution {
public:
    string addStrings(string s1, string s2) {
        int l1=s1.length()-1, l2=s2.length()-1;
        
        int carry=0;
        string res="";
        while(l1>=0 || l2>=0){
            int sum=0;
            
            //s1 & s2 have elements
            if(l1>=0 && l2>=0){
                int x=s1[l1]-'0', y=s2[l2]-'0';
                
                sum=carry+x+y;
                l1--,l2--;
            }
            
            //l1 has elements, l2 is exhausted
            else if(l1>=0){
                int x=s1[l1]-'0';
                
                sum=carry+x;
                l1--;
            }
            
            //l2 has elements, l1 is exhausted
            else if(l2>=0){
                int x=s2[l2]-'0';
                    
                sum=carry+x;
                l2--;
            }
            
            res+=to_string(sum%10);
            
            carry=sum/10;
        }
        
        //for last carry
        if(carry>0)
            res+=to_string(carry);
        
        reverse(res.begin(),res.end());
        
        return res;
    }
};