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

            longest = max(longest,currentLength);
        }

        return longest;
    }
};


//Method-2 (Sorting)
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size(),len1 = 1;

        if(n==0){
            return 0;
        }
        
        sort(nums.begin(),nums.end());
        
        int lastsmallest= nums[0], len2=1;

        for(int i=1; i<n; i++){
            if(nums[i]==lastsmallest){
                continue;
            }
            else if(nums[i]==lastsmallest+1){
                len2++;
            }
            else{
                len2=1;
                
            }
            lastsmallest=nums[i];
            len1=max(len1,len2);
        }

        return len1;
    }
};


//Method-3 optimised using sets
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size(),len=0;

        if(n==0){
            return 0;
        }

        unordered_set<int> s;

        for(int i=0; i<n; i++){
            s.insert(nums[i]);
        }


        for(auto it:s){
            if(s.find(it-1)==s.end()){
                int x=it;
                int count=1;
                while(s.find(x+1)!=s.end()){
                    count++;
                    x+=1;
                }
                len=max(len,count);
            }
        }

        return len;
    }
};
