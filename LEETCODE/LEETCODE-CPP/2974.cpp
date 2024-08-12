//2974. Minimum Number Game
//https://leetcode.com/problems/minimum-number-game/description/

class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int n=nums.size();
        priority_queue<int,vector<int>,greater<int>> pq;
        vector<int> ans;

        for(int i=0;i<n;i++)
            pq.push(nums[i]);

        while(!pq.empty()){
            int x= pq.top();
            pq.pop();
            
            int y= pq.top();
            pq.pop();

            ans.push_back(y);
            ans.push_back(x);
        }

        return ans;
    }
};