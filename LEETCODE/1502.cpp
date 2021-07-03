//1502. Can Make Arithmetic Progression From Sequence

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        
        int n=arr.size(),diff1,diff2;
    
        
        sort(arr.begin(),arr.end());
        
        diff1=arr[0]-arr[1];
        
        for(int i=1;i<n-1;i++)
        {
            diff2=arr[i]-arr[i+1];
            
            if(diff1!=diff2)
                return false;
        }
        
        return true;
    }
};