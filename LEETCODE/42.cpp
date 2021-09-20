//42. Trapping Rain Water

//method 1
class Solution {
public:
    int trap(vector<int>& height) {
        
        int n=height.size();
        int res=0;
        vector<int> l(n),r(n);
        
        l[0]=height[0];
        for(int i=1;i<n;i++)
            l[i]=max(height[i],l[i-1]);
        
        r[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--)
            r[i]=max(height[i],r[i+1]);
        
        for(int i=1;i<n-1;i++)
            res+=min(l[i],r[i])-height[i];
        
        return res;
    }
};