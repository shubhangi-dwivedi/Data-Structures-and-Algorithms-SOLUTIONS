//1431. Kids With the Greatest Number of Candies
//https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/?envType=study-plan-v2&envId=leetcode-75

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