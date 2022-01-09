//1310. XOR Queries of a Subarray

class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        //int res;
        vector<int>res;
        int n1=arr.size(),n2=queries.size();
        
        for(int i=1;i<n1;i++)
            arr[i]^=arr[i-1];
        
        for(int i=0;i<n2;i++)
        {
            int x=queries[i][0];
            int y=queries[i][1];
            
            if(x==0)
                res.push_back(arr[y]);
            
            else
                res.push_back(arr[x-1]^arr[y]);
        }
        
        return res;
    }
};