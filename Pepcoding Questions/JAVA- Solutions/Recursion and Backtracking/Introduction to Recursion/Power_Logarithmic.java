//Time Complexity - O(log(p))

import java.util.Scanner;

public class Power_Logarithmic {

    public static int calc(int n, int p){
        if(p==0)
            return 1;

        int res= calc(n, p/2);
        int ans= res*res;

        if(p%2==1)
            ans*=n;

        return ans;
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        int n=sc.nextInt();
        int p=sc.nextInt();

        int ans=calc(n, p);
        System.out.println(ans);
    }

}
