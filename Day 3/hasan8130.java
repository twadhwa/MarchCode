import java.util.*;
public class days {
    public static void main(String[]args)
    {
        
         int a[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
        Scanner sc=new Scanner(System.in);

        int monthNo=sc.nextInt();
      if(monthNo>=1&&monthNo<=12)
      {
        if(monthNo!=2)
          System.out.println("This month has "+a[monthNo]+" days");
          else
          System.out.println("This month has 28/29 days");
      }
      else
      System.out.println("enter a valid no");
      sc.close();
    }
}
