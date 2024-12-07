//215. Kth Largest Element in an Array
//https://leetcode.com/problems/kth-largest-element-in-an-array/

//Method 1 sorting in descending order
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       sort(nums.begin(),nums.end(),greater<int>());
        
       return nums[k-1];
    }
};

//Method-2 using minheap
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

//Method-3 using minheap (clear code)
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<int, vector<int>,greater<int>>pq;
        
        for(int i=0;i<n;i++){
            pq.push(nums[i]);
            
            if(pq.size()>k){
                pq.pop();
            }
        }
        
        return pq.top();
    }
};