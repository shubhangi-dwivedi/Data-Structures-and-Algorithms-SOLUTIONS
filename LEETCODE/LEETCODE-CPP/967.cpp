//967. Numbers With Same Consecutive Differences
//https://leetcode.com/problems/numbers-with-same-consecutive-differences/

class Solution {
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        deque<int> q{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
        
        while (--n > 0) {
            int sz = q.size();
            
            for (int i = 0; i < sz; i++) {
                int p = q.front();
                q.pop_front();
                
                for (int j = 0; j < 10; j++) {
                    if (abs((p % 10) - j) == k)
                        q.push_back(p * 10 + j);
                }
            }
        }
        return vector<int>{q.begin(), q.end()};
    }
};