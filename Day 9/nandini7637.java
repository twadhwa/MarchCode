
import java.util.*;

public class nandini7637{
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number");
         int n = sc.nextInt();
         int b=0;
         int c=0,rev=0;
          int a=n%10;
          while(n>0)
          {
           c=n%10;
           rev=rev*10+c;
           n/=10;
          } 
          b=rev%10;
 System.out.println((a+b));
}
}
