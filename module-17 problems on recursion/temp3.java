import java.util.*;
public class sol{
    public static long total(long k){
        if(k<3){
            return 0;
        }
        long res= (k*(k-1)*(k-2))/6;
        return res;
    }
    public static long calc(int n){
       long d1=0;
       long totalcomb=total((long) n*n);
       long heightcomb=2*n*total(n);
       for (int i=2;i<=n;i++) {
        d1+=2*total(i);
       }
      
      long extras=heightcomb+d1;
       return totalcomb-extras;
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t>0){
            int n=sc.nextInt();
            System.out.println(calc(n));
            t--;
        }
    }
}