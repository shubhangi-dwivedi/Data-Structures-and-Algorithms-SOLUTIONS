//2558. Take Gifts From the Richest Pile
//https://leetcode.com/problems/take-gifts-from-the-richest-pile/description/

class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq;
        int n=gifts.size();

        for(int i=0;i<n;i++){
            pq.push(gifts[i]);
        }

        long long sum_gifts=0;
        while(k>0){
            int x=sqrt(pq.top());
            pq.pop();
            pq.push(x);

            k--;
        }

        while(!pq.empty()){
            sum_gifts+=pq.top();
            pq.pop();
        }

        return sum_gifts;
    }
};