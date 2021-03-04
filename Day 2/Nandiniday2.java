
import java.util.*;

public class Nandinidaytwo{
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number to be checked");
        int n = sc.nextInt();
        if(n%5==0 && n%11==0)
        System.out.println("Divisible by both 5 and 11");
        else
        System.out.println("Not Divisible by both 5 and 11");
    }
}