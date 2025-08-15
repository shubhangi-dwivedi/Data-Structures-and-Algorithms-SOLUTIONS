// 2264. Largest 3-Same-Digit Number in String
// https://leetcode.com/problems/largest-3-same-digit-number-in-string/description/

class Solution {
    public String largestGoodInteger(String num) {
        String res="";

        for(int i=0;i+2<num.length();i++){
            if(num.charAt(i)==num.charAt(i+1) && num.charAt(i+1)==num.charAt(i+2)){
                res= res.compareTo(num.substring(i,i+3))>0 ? res: num.substring(i,i+3);
            }
        }

        return res;
    }
}