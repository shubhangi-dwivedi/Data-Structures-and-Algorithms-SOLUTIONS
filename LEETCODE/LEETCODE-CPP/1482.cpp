//1482. Minimum Number of Days to Make m Bouquets
//https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/description/

//Method-1 (Binary search + sliding window)
class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size(), low=INT_MAX, high=INT_MIN, ans=INT_MAX;

        if((long)n<(long)k*m)
             return -1;

        for(int x:bloomDay) low=min(low,x);
        for(int x:bloomDay) high=max(high,x);

        while(low<=high){
            int mid=low+(high-low)/2;

            if(helper(bloomDay,mid,m,k)){
                ans=min(ans,mid);
                high=mid-1;
            }
            else
                low=mid+1;
        }

        return ans;
    }

    bool helper(vector<int>& bloomDay, int days,int m, int k){
        int nos=0, n=bloomDay.size();

        for(int i=0;i<n;i++){
            int start=i, end=i;

            while(end<n && bloomDay[end]<=days){
                if(end-start+1 == k){
                    nos++;
                    start=end+1;
                    // end++; (optional but including it , it will exclude the repetition)
                    continue;
                }
                end++;
            }
            i=end;
        }

        return nos>=m;
    }
};

//Method-2 (Binary search + sliding window) clean code
class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size(), low=INT_MAX, high=INT_MIN, ans=INT_MAX;

        if((long)n<(long)k*m)
             return -1;

        for(int x:bloomDay) low=min(low,x);
        for(int x:bloomDay) high=max(high,x);

        while(low<=high){
            int mid=low+(high-low)/2;

            if(helper(bloomDay,mid,m,k)){
                ans=min(ans,mid);
                high=mid-1;
            }
            else
                low=mid+1;
        }

        return ans;
    }

    bool helper(vector<int>& bloomDay, int days,int m, int k){
        int nos=0, n=bloomDay.size(), winA=0;

        for(int i=0;i<n;i++){

            if(bloomDay[i]<=days){
                    winA++;

                    if(winA==k){
                        nos++;
                        winA=0;
                    }       
            }
            else 
                winA=0;
        }

        return nos>=m;
    }
};