//1431. Kids With the Greatest Number of Candies

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int max;
        vector<bool> r;
        
        max=*max_element(candies.begin(),candies.end());
        
        for(int i=0;i<candies.size();i++)
        {
            if((candies[i]+extraCandies)>=max)
                r.push_back(true);
            else
                r.push_back(false);
        }

        return r;
    }
};