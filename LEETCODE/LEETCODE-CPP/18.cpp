//18. 4Sum
//https://leetcode.com/problems/4sum/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size()<3){
            return {};
        }

        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        for(int i=0;i<nums.size()-3;i++){
            if(i>0 && nums[i]==nums[i-1]){
                    continue;
            }

            for(int j=i+1;j<nums.size()-2;j++){
                if(j>i+1 && nums[j]==nums[j-1]){
                    continue;
                }

                int k=j+1, l=nums.size()-1;
                while(k<l){
                    long long sum=(long long)nums[i]+nums[j]+nums[k]+nums[l];

                    if(sum==target){
                        res.push_back({nums[i],nums[j],nums[k],nums[l]});
                        k++;

                        while(k<l && nums[k]==nums[k-1]){
                            k++;
                        }

                        while(k<l && nums[l]==nums[l-1]){
                            l--;
                        }
                    }

                    else if(sum<target){
                        k++;
                    }
                    else{
                        l--;
                    }
                }
            }
        }
        return res;
    }
        
};