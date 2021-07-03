//88. Merge Sorted Array

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        
        int k=0;
        int N=nums1.size();
        for(int i=N-n;i<N;i++)
        {
          swap(nums1[i],nums2[k]);
          k++;
        }
        
        
        
        sort(nums1.begin(),nums1.end());
        
        
    }
};