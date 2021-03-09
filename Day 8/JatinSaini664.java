import java.util.*;
import java.math.*;

public class JatinSaini664{
    public static void main(String args[]){
        Scanner scn = new Scanner(System.in);

        int a = scn.nextInt();

        BigInteger ans = new BigInteger("1");

        for(int i=2;i<=a;i++){
            ans=ans.multiply(BigInteger.valueOf(i));
        }

        System.out.println(ans);
    }
}