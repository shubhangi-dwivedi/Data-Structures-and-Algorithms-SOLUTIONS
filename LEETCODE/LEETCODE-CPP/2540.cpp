//2540. Minimum Common Value
//https://leetcode.com/problems/minimum-common-value/

//Methos-1 (binary search)
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(), n2=nums2.size();

        for(int i=0;i<n1;i++){
            int x=binarySearch(nums2,nums1[i], 0, n2-1);

            if(x!=-1)
                return x;
        }

        return -1;
    }

    int binarySearch(vector<int> &nums2, int num1, int low, int high){

        while(low<=high){
            int mid=low+(high-low)/2;

            if(num1==nums2[mid])
                return num1;
            else if(num1<nums2[mid])
                high=mid-1;
            else 
                low=mid+1;
                
        } 

        return -1;
    }
};