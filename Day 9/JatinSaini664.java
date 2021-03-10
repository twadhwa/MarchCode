import java.util.*;

public class JatinSaini664 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        long a = scn.nextLong();
        long ans=a%10;
        a/=10;

        while(a>0){
            long b=a%10;
            a/=10;
            if(a==0)
                ans+=b;
        }
        System.out.println(ans);
    }
}
