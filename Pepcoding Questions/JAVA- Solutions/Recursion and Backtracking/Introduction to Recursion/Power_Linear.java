//Time Complexity - O(p)

import java.util.Scanner;

public class Power_Linear {
    
    public static int pow_calc(int n, int p){
        if(p==0)
            return 1;

        if(p==1)
            return n;

        return n*pow_calc(n, p-1);
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        int n=sc.nextInt();
        int p=sc.nextInt();

        System.out.println(pow_calc(n,p));
    }
}
