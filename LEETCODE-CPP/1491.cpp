//1491. Average Salary Excluding the Minimum and Maximum Salary

class Solution {
public:
    double average(vector<int>& salary) {
        
        double sum=0;
        int n=salary.size();
        double avg;
        
        sort(salary.begin(),salary.end());
        
        for(int i=1;i<n-1;i++)
            sum+=salary[i];
        
        avg=sum/(n-2);
        
        return avg;
        
    }
};