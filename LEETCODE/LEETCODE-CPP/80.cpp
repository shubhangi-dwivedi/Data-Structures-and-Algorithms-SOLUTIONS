//80. Remove Duplicates from Sorted Array II
////https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/

//1st approach
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int x=0,count=1,y=0;
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[x]==nums[i] && count<2)
            {
                x++;
                nums[x]=nums[i];
                count++;
            }
            else if(nums[x]!=nums[i])
            {
                count=1;
                x++;
                nums[x]=nums[i];
            }
            
        }
        return x+1;
        
    }
};


//Approach 2
class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int n=a.size();
        int k=1;
        int x=0;
        a[x]=a[0];
        
        for(int i=1;i<n;i++){
            if(a[x]!=a[i]){
                a[++x]=a[i];
                k=1;
            }
            else if(k<2){
                k++;
                a[++x]=a[i];
            }
        }
        
        return x+1;
    }
};