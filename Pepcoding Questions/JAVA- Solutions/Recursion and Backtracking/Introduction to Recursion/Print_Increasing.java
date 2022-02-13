import java.util.*;

public class Print_Increasing {
    
    public static void Increasing(int n){
        if(n==0)
            return;
        
        Increasing(n-1);
        System.out.println(n);
    }

    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);

        int n=sc.nextInt();

        Increasing(n);
    }

}
