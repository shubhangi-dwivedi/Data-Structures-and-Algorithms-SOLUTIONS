//1464. Maximum Product of Two Elements in an Array

//method-1 using sort()
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        sort(nums.begin(),nums.end(),greater<int>());
        return (nums[0]-1)*(nums[1]-1);
        
    }
};

//method-2 using maxheap
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        priority_queue<int> p;
        int n=nums.size();
        for(int i=0;i<n;i++)
            p.push(nums[i]);
        
        int x=p.top()-1;//first max
        p.pop();
        int y=p.top()-1;//second max
        
        return x*y;
    }
};