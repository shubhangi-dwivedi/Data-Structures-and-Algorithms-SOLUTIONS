import java.util.*;

public class Display_Arrays {
    
    public static void display(int a[],int n,int i){
        if(i==n)
            return;

        System.out.print(a[i]+" ");

        display(a,n,i+1);
    } 

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();

        int a[]=new int [n];

        for(int i=0;i<n;i++)
            a[i]=sc.nextInt();

        display(a,n,0);
    }
}
