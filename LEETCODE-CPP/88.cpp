//88. Merge Sorted Array

//METHOD-1
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

//METHOD-2
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0)
            return;
        
        int N=nums1.size();
        int j=0,i=0,t=m;
        
        while(j<n){
            
            if(nums1[i]>nums2[j] || i>=t){
                nums1.pop_back();
                t++;
                nums1.insert(nums1.begin()+i,nums2[j]);
                j++;
            }
            else
                i++;
        }
    }
};