//1089. Duplicate Zeros

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size(),i=0;
        
        for(int i=0;i<n;i++)
            if(arr[i]==0)
            {
                arr.insert(arr.begin()+i,0);
                i++;
                arr.pop_back();
            }
    }
};