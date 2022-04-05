//11. Container With Most Water
//https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int s{};
        int l=height.size()-1;
        int maxans{};
        int ans{};
        while(s<l)
        {
            int len=l-s;
            int hei=min(height[l],height[s]);
            if(height[s]>height[l])
            {
                l--;
            }
            else
            {
                s++;
            }
            maxans=len*hei;
            
            ans=max(ans,maxans);
        }
        return ans;
    }
};