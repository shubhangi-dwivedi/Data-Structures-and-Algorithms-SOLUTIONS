import java.util.*;

public class Print_Zigzag {
    
    public static void print_pattern(int n){
        if(n==0)
            return;

        System.out.print(n+" ");
        print_pattern(n-1);
        System.out.print(n+" ");
        print_pattern(n-1);
        System.out.print(n+" ");
    }

    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);

        int n=sc.nextInt();
        
        print_pattern(n);
    }

}
