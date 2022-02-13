import java.util.*;

public class Print_Decreasing {

    public static void Decreasing(int n){
        if(n==0)
            return;
        
        System.out.println(n);
        Decreasing(n-1);
    }

    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);

        int n=sc.nextInt();

        Decreasing(n);
    }

}
