//989. Add to Array-Form of Integer
//https://leetcode.com/problems/add-to-array-form-of-integer/

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n=num.size();
        int carry=0, curr=k;
        
        vector<int> res;
        int i=n-1;
        while(i>=0 || curr>0){
            
            //if elements are present in num[]
            if(i>=0){
            int sum=carry+num[i]+(curr%10);
            res.push_back(sum%10);
            carry=sum/10;
            
            i--;
            }
            //if there is no element in num[]
            else{
                int sum=carry+(curr%10);
                res.push_back(sum%10);
                carry=sum/10;
            
            }
            curr/=10;
        }
        
        //for last carry
        if(carry>0)
            res.push_back(carry);
        
        reverse(res.begin(),res.end());
        return res;
    }
};