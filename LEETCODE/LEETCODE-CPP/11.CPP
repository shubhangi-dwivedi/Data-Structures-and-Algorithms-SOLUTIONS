//11. Container With Most Water
//https://leetcode.com/problems/container-with-most-water/

//Method-1 using two pointers
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

//Method-2 using two-pointers (simplified & clear code)
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0,j=n-1;
        int area=INT_MIN;
        
        while(i<j){
            int x=min(height[i],height[j]);
            area=max(area,x*(j-i));
                        
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        
        return area;
    }
};