//2678. Number of Senior Citizens
//https://leetcode.com/problems/number-of-senior-citizens/?envType=daily-question&envId=2024-08-01

class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0, n=details.size();

        for(int i=0;i<n;i++){
            int age=stoi(details[i].substr(11,2));

            if(age>60)
                count++;
        }

        return count;
    }
};