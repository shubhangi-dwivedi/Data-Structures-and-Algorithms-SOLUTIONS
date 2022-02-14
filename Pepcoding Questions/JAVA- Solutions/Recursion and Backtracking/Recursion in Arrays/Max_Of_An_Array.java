import java.util.*;

public class Max_Of_An_Array {

    public static int find_max(int a[], int n,int i){
        if(i==n-1)
            return a[i];

        int x=find_max(a, n, i+1);
        
        if(a[i]>=x)
            x=a[i];
        
        return x;
    }

    public static void main(String[] args) {
        //Max_Of_An_Array m;

        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();

        int a[]=new int [n];

        for(int i=0;i<n;i++)
            a[i]=sc.nextInt();

        //int res=Integer.MIN_VALUE;
        System.out.println(find_max(a,n,0));
    }

}
