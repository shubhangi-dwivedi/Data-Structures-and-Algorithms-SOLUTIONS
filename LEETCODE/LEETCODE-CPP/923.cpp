//923. 3Sum With Multiplicity
//https://leetcode.com/problems/3sum-with-multiplicity/

class Solution {
public:
    int threeSumMulti(vector<int>& arr, int X) {
        int n = arr.size(), mod = 1e9+7, ans = 0;
        unordered_map<int, int> m;
        
        for(int i=0; i<n; i++) {
            ans = (ans + m[X - arr[i]]) % mod;
            
            for(int j=0; j<i; j++) m[arr[i] + arr[j]]++;
        }
        return ans;
    }
};