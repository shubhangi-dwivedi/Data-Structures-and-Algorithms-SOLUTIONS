//475. Heaters
//https://leetcode.com/problems/heaters/

//Method-1 (binary search on ans)
class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int low=0, n=houses.size()-1, m=heaters.size()-1, ans=INT_MAX, high;
        
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());
        
        high=max(abs(houses[0]-heaters[m]), abs(houses[n]-heaters[0]));
        
        while(low<=high){
            int mid= low+(high-low)/2;
            
            if(helper(houses, heaters, mid, n, m)){
                ans=min(ans,mid);
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        
        return ans;
    }
    
    bool helper(vector<int>& houses,  vector<int>& heaters, int radius, int housesIdxs, int heatersIdxs){
        int i=0, j=0;
        
        while(i<=housesIdxs && j<=heatersIdxs){
            if(abs(houses[i]-heaters[j])<=radius){
                i++;
            }
            else{
                j++;
            }
        }
        
        return i==housesIdxs+1;
    }
};

//1 5
//5

//1 2 3 4 5 6
//h       h
//  x