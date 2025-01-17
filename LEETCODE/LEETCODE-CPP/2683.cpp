//2683. Neighboring Bitwise XOR
//https://leetcode.com/problems/neighboring-bitwise-xor

class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int n=derived.size();
        int res=0;

        for(int i=0;i<n;i++)
            res^=derived[i];
        
        return res==0;
    }
};