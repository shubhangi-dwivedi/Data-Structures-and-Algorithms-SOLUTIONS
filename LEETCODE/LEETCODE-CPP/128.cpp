//128. Longest Consecutive Sequence
//https://leetcode.com/problems/longest-consecutive-sequence/description/

//Method-1 Brute force (TC:O(n^2))
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size(),longest = 0;

        if(n==0){
            return 0;
        }
        
        for(int i=0; i<n; ++i) {

            int currentNum=nums[i];
            int currentLength=1;

            while(find(nums.begin(), nums.end(), currentNum+1) != nums.end()) {
                currentNum++;
                currentLength++;
            }

            longest = max(longest, currentLength);
        }

        return longest;
    }
};


//