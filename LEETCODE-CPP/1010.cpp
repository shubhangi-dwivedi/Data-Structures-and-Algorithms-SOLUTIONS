//1010. Pairs of Songs With Total Durations Divisible by 60

//METHOD-1 (BRUTE FORCE - TLE)
class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count=0;
        
        for(int i=0;i<time.size();i++){
            for(int j=i+1;j<time.size();j++){
                if((time[i]+time[j])%60==0){
                    count++;
                }
            }
        }
        
        return count;
    }
};


//METHOD-2
class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count=0;
        vector<int> res(60,0);
        
        for(int i=0;i<time.size();i++)
            res[time[i]%60]+=1;    
        
        for(int i=1;i<=29;i++)
            count+=res[i]*res[60-i];
        
        count+=(res[0]*(res[0]-1))/2;
        count+=(res[30]*(res[30]-1))/2;
        
        
        return count;
    }
};


//METHOD-3
class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count=0;
         
        unordered_map<int,int>m;
        
        for(int i=0;i<time.size();++i){
            time[i]%=60;
            m[time[i]]+=1;
        }
        
        for(auto i : m){
            if(i.first==0 || i.first==30)
                count+=((m[i.first])*(m[i.first]-1)/2);
            
            if(i.first<30 && m.count(60-i.first))
                count+=(m[i.first]*m[60-i.first]);
        }
        
        return count;
    }
};