import java.util.*;

public class nandini7637{
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the numbers");
         int n1 = sc.nextInt();
         int n2 = sc.nextInt();
         int hcf=1;
         for(int i=1;i<=Math.min(n1,n2);i++)
         {
             if(n1%i==0 && n2%i==0)
             hcf=i;
         }
 System.out.println(hcf);
}
}