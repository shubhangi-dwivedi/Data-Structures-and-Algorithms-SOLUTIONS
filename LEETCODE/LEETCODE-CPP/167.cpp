//167. Two Sum II - Input array is sorted
//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/

//Method 1
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        vector<int>res;
        unordered_map<int,int>m;
        int n=numbers.size(),x,y;
        for(int i=0;i<n;i++)
        {
            
            if(m.find(target-numbers[i])!=m.end())
            {
                y=i+1;
                x=numbers[i];
                break;
            }
            m[numbers[i]]++;
        }
        
        for(int i=0;i<n;i++)
            if(numbers[i]==target-x)
            {    
                res.push_back(i+1);
                res.push_back(y);
                break;
            }
        
        return res;
        }
};


//Method 2 (2-pointers)
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int n=nums.size(), start=0, end=n-1;
    
            vector<int> res;
            while(start<end){
                int sum=nums[start]+nums[end];
    
                if(sum==target){
                    res.push_back(start+1);
                    res.push_back(end+1);
    
                    break;
                }
                else if(sum<target){
                    start++;
                }
                else{
                    end--;
                }
            }
            
            return res;
        }
    };