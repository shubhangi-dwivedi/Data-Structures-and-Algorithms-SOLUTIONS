//448. Find All Numbers Disappeared in an Array
//https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

//Method-1 using two-pointers
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        vector<int> ans;
        
        int i=0,j=1;
        while(i<n || j<=n){
            if( i<n && nums[i]==j){
                while(i<n && nums[i]==j){
                    i++;
                }
            }
            else{
                ans.push_back(j);
            }
            j++;
        }
        
        return ans;
    }
};

//[1,2,2,3,3,4,7,8]