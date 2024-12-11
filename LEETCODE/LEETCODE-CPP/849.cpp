//849. Maximize Distance to Closest Person
//https://leetcode.com/problems/maximize-distance-to-closest-person/description/


//Method-1 brute force [    TC=O(n) ,   SC=o(n)        ]
class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n=seats.size();

        vector<int>left(n,INT_MAX);
        vector<int>right(n,INT_MAX);

        for(int i=0;i<n;i++){
            if(seats[i]==1){
                left[i]=0;
            }
            else if(i>0 && left[i-1]!=INT_MAX){
                left[i]=left[i-1]+1;
            }
        }

        for(int i=n-1;i>=0;i--){
            if(seats[i]==1){
                right[i]=0;
            }
            else if(i<n-1 && right[i+1]!=INT_MAX){
                right[i]=right[i+1]+1;
            }
        }

        int max_closest=0;
         for(int i = 0; i < n; i++) {
            if(seats[i] == 0) {
                int min_closest;
                // if(left[i] == INT_MAX && right[i] == INT_MAX)
                //     min_closest = n;
                if(left[i] == INT_MAX)
                    min_closest = right[i];
                else if(right[i] == INT_MAX)
                    min_closest = left[i];
                else
                    min_closest = min(left[i], right[i]);
                max_closest = max(max_closest, min_closest);
            }
        }


        return max_closest;
    }
};


//Method-2 (similar to counting consecutive zeroes)             [   TC=O(n) ,   SC=O(n)     ]
class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n=seats.size(), max_closest=0;

        //Count prefix zeroes if any
        //help us to figure out if we place person on the extreme
        int prefZeroes=0, i=0;
        if(seats[0]==0){
            while(i<n && seats[i]==0){
                prefZeroes++;
                i++;
            }
        }

        //Count suffix zeroes if any
        //help us to figure out if we place person on the extreme
        int suffZeroes=0, j=n-1;
        if(seats[n-1]==0 && n-1!=0){
            while(j>=0 && seats[j]==0){
                suffZeroes++;
                j--;
            }
        }

        //Count middle zeroes if any
        int midZeroes=0,zeroesCount=0;
        for(i;i<=j;i++){
            if(seats[i]==0){
                zeroesCount++;
            }
            else{
                zeroesCount=0;
            }

            int x=ceil(zeroesCount/2.0);    //dividing by 2 to find the position where to place
            midZeroes=max(midZeroes,x);
        }

        //Taking max of all the zeroes
        return max(midZeroes,max(prefZeroes,suffZeroes));
    }
};