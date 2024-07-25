//3158. Find the XOR of Numbers Which Appear Twice
//https://leetcode.com/problems/find-the-xor-of-numbers-which-appear-twice/description/

class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int n=nums.size(), ans=0;
        set<int> s;

        for(int i=0;i<n;i++){

            if(s.find(nums[i])!=s.end()){
                ans^=nums[i];
                continue;
            }
            s.insert(nums[i]);
        }
        return ans;
    }
};