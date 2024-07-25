//1346. Check If N and Its Double Exist
//https://leetcode.com/problems/check-if-n-and-its-double-exist/description/

//Method-1 brute force
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i=0;i<arr.size();i++)
        {
            for(int j=0;j<arr.size();j++)
            {
                if(i!=j)
                {
                    if(arr[i]==2*arr[j])
                        return true;
                }
            }
        }
        return false;
    }
};


//Methos-2 using maps
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        map<int,int> mp;
        int n=arr.size();

        for(int i=0;i<n;i++)
            mp[arr[i]]++;

        for(int i=0;i<n;i++){
            if(arr[i]==0 && mp[arr[i]]>=2)
                return true;
            if(arr[i]!=0 && mp[arr[i]*2]>=1)
                return true;
        }

        return false;
    }
};