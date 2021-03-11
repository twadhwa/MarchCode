import java.util.*;

public class JatinSaini664 {
    public static int hcf(int a , int b){
        if(b!=0){
            return hcf(b, a%b);
        }else{
            return a;
        }
    }
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int a=scn.nextInt();
        int b = scn.nextInt();

        System.out.println(hcf(a, b));
    }
}