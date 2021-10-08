//1588. Sum of All Odd Length Subarrays

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        int n=arr.size();
        int sum=0,y;
        
        for(int i=0;i<n;i++){
            int x=(n-i)*(i+1);
            if(x%2==1)
                y=x/2+1;
            else
                y=x/2;
            
            sum+=(y*arr[i]);
        }
        
        return sum;
    }
};