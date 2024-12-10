//66. Plus One
//https://leetcode.com/problems/plus-one/description/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        
        for(int i=n-1;i>=0;i--){
            if(digits[i]!=9){
                digits[i]++;
                break;
            }
            
            if(digits[i]==9 && i!=0){
                digits[i]=0;
            }
            else{
                digits[i]=0;
                digits.insert(digits.begin(),1);
            }
        }
        
        return digits;
    }
};