import java.util.*;

public class Nandini7637{
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the numbers");
         int n1 = sc.nextInt();
         int n2 = sc.nextInt();
         int lcm=1;
         int max=Math.max(n1,n2);
         int a[] = new int[max];
         int b[] = new int[max];
         int z=1,p=0;
         for(int i=0;i<max;i++)
         {     
             a[i] = n1*z;
             b[i] = n2*z;
             z++;
         }

         for(int i=0;i<max;i++)
        {
            for(int j=0;j<max;j++)
            {
                if (a[i]==b[j])
               
               { lcm=a[i];
                p++;
                break;
               }
                if(p==1)
                {
                    break;
                }
            }
        }
 System.out.println(lcm);
}
}
