//215. Kth Largest Element in an Array

//Method 1
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       sort(nums.begin(),nums.end(),greater<int>());
        
       return nums[k-1];
    }
};

//Method 2
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> q; //minheap
        
        int n1=nums.size();
        for(int i=0;i<n1;i++){
            if(i<k)
                q.push(nums[i]);
            else{
                if(nums[i]>q.top()){
                    q.pop();
                    q.push(nums[i]);
                }
            }
        }        
        
        return q.top();
    }
};