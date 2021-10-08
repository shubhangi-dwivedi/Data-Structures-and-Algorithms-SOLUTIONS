//1732. Find the Highest Altitude

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int sum=0,max_alt=0,n=gain.size();
        
        for(int i=0;i<n;i++){
            sum+=gain[i];
            
            max_alt=max(max_alt,sum);
        }
        return max_alt;
    }
};