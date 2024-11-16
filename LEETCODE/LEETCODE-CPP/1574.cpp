//1574. Shortest Subarray to be Removed to Make Array Sorted
//https://leetcode.com/problems/shortest-subarray-to-be-removed-to-make-array-sorted/description/

class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int n=arr.size();
        int right=n-1, left=0;

        while(right>0 && (arr[right]>=arr[right-1])){
            right--;
        }

        int ans=right;

        while(left<right && (left==0 || (arr[left]>=arr[left-1]))){
            while(right<n && (arr[left]>arr[right])){
                right++;
            }
            ans=min(ans,right-left-1);
            left++;
        }
        return ans;
    }
};