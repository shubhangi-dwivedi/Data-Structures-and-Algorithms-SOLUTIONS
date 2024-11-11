//229. Majority Element II
//https://leetcode.com/problems/majority-element-ii/

//Method-1 using hashmap
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> res;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
                m[nums[i]]++;
        
        for(auto i: m)
            if(i.second>n/3)
                res.push_back(i.first);
        
        return res;
    }
};

//Method-2 using moore's voting algo
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;

        int count1=0, count2=0, res1=0, res2=0;
        
        for(int i=0;i<n;i++){
            if(count1==0 && nums[i]!=res2){
                res1=nums[i];
                count1=1;
            }else if(count2==0 && nums[i]!=res1){
                res2=nums[i];
                count2=1;
            }
                     
            else if(res1==nums[i]){
                count1++;
            }
            else if(res2==nums[i]){
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }

        count1=0, count2=0;
        
        if(res1==res2){
            ans.push_back(res1);
            return ans;
        }
        for(int i=0;i<n;i++){
            if(count1<=floor(n/3)){
                if(res1==nums[i]){
                    count1++;
                }
            }
            if(count2<=floor(n/3)){
                if(res2==nums[i]){
                    count2++;
                }
            }
            
            if(count1 > floor(n/2) && count2 > floor(n/2))
                break;
        }

        if(count1>floor(n/3)){
            ans.push_back(res1);
        }
        if(count2>floor(n/3)){
            ans.push_back(res2);
        }

        return ans;
    }
};