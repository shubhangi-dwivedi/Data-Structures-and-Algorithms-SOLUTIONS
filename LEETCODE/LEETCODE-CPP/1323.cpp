//1323. Maximum 69 Number
//https://leetcode.com/problems/maximum-69-number/

class Solution {
public:
    int maximum69Number (int num) {
        string s=to_string(num);
        
        int l=s.length(), i=0;
        while(i<l){
            if(s[i]=='6'){
                s[i]='9';
                break;
            }
            i++;
        }
        
        num=stoi(s);
        return num;
    }
};