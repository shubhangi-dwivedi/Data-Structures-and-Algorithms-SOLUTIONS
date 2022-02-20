//1288. Remove Covered Intervals
//https://leetcode.com/problems/remove-covered-intervals/

class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& a) {
        sort(a.begin(),a.end());
        int l_max=-1,r_max=-1,count=0;
    
        for(int i=0;i<a.size();i++){
            if(a[i][0]>l_max && a[i][1]>r_max){
                count++;
                l_max=a[i][0];
            }
            r_max=max(r_max,a[i][1]);
        }
        
        return count;
    }
};