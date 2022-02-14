import java.util.*;

public class Last_Index {

    public static int idx(int a[], int i,int n,int k){
        if(i<0)
            return -1;
        
        int x=idx(a,i-1,n,k);

        if(a[i]==k)
            x=i;

        return x;
    }

    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();

        int a[]=new int [n];

        for(int i=0;i<n;i++)
            a[i]=sc.nextInt();

        int k=sc.nextInt();

        System.out.println(idx(a,n-1,n,k));
    }
}

