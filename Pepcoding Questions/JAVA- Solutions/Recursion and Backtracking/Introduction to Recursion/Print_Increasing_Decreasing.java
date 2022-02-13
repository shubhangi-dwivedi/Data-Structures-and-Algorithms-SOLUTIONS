import java.util.*;

public class Print_Increasing_Decreasing {
    
    public static void Increasing_Decreasing(int n){
        if(n==0)
            return;
        
        System.out.println(n); //deacreasing
        Increasing_Decreasing(n-1);
        System.out.println(n); //increasing
    }

    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);

        int n=sc.nextInt();

        Increasing_Decreasing(n);
    }

}
