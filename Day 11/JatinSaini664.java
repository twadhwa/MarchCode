// package Day 11;
import java.util.*;

public class JatinSaini664 {
    public static int GCD(int a , int b){
        return (b!=0)?GCD(b, a%b):a;
    }
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int a =scn.nextInt();
        int b=scn.nextInt();

        int gcd=GCD(a, b);

        int lcm= (a*b)/gcd;

        System.out.println(lcm);
    }
}
