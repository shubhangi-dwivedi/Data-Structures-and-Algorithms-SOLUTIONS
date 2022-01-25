//941. Valid Mountain Array
//https://leetcode.com/problems/valid-mountain-array/submissions/

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int max_e=INT_MIN, n=arr.size(), x;
        
        if(n<=2)
            return false;
        
        for(int i=0;i<n;i++)
            if(arr[i]>max_e){
                max_e=arr[i];
                x=i;
            }
        
        if(x==0 || x==n-1)
            return false;
        
        int count_left=0;
        for(int i=0;i<x;i++){
            if(arr[i]==arr[i+1] || arr[i]>arr[i+1])
                return false;
            if(arr[i]<max_e && arr[i]!=max_e)
                count_left++;
        }
        
        int count_right=0;
        for(int i=x+1;i<n;i++){
            if(arr[i-1]==arr[i] || arr[i-1]<arr[i])
                return false;
            if(arr[i]<max_e && arr[i]!=max_e)
                count_right++;
        }
        
        
        if(count_left+count_right+1 == n)
            return true;
        return false;
    }
};