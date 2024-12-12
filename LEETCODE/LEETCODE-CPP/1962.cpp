//1962. Remove Stones to Minimize the Total
//https://leetcode.com/problems/remove-stones-to-minimize-the-total/

class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        int n=piles.size();

        for(int i=0;i<n;i++){
            pq.push(piles[i]);
        }

        int sum_stones=0;
        while(k>0){
            int x=ceil(pq.top()/2.0);
            pq.pop();
            pq.push(x);

            k--;
        }

        while(!pq.empty()){
            sum_stones+=pq.top();

            pq.pop();
        }

        return sum_stones;
    }
};