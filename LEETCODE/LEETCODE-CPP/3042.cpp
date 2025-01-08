//3042. Count Prefix and Suffix Pairs I
//https://leetcode.com/problems/count-prefix-and-suffix-pairs-i/description/

//Methos-2 Brute force
class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& s) {
        int n=s.size();

        int count=0;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(s[j].length()<=s[i].length()){
                    string temp1=s[i], temp2=s[j];
                    bool prefFlag=false, suffFlag=false;

                    int x=0, y=0;
                    while(y<s[j].length()){
                        if(temp1[x]==temp2[y]){
                            x++, y++;
                        }
                        else{
                            break;
                        }
                    }

                    if(y==s[j].length()){
                        prefFlag=true;
                    }

                    x=s[i].length(), y=s[j].length();

                    while(y>=0){
                        if(temp1[x]==temp2[y]){
                            x--, y--;
                        }
                        else{
                            break;
                        }
                    }

                    if(y==-1){
                        suffFlag=true;
                    }

                    if(prefFlag && suffFlag){
                        cout<<s[i]<<" "<<s[j];
                        count++;
                    }
                }
            }
        }

        return count;
    }
};

//Method-2 using string function- starts_with() & ends_with()
class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& s) {
        int n=s.size();

        int count=0;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                count+=(s[i].starts_with(s[j]) && s[i].ends_with(s[j]));
            }
        }

        return count;
    }
};