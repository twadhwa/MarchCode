import java.util.*;

public class Nandini7637{
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of month");
        int n = sc.nextInt();

        switch(n)
        {
        case 1 :
        case 3 :
        case 5 :
        case 7 :
        case 8 :
        case 10 :
        case 12 :
        System.out.println("Number of days = 31");
        break;
        case 4 :
        case 6 :
        case 9 :
        case 11 :
        System.out.println("Number of days = 30");
        break;
        case 2 :
        System.out.println("Number of days = 28 if non leap year and 29 if a leap year");
        break;
        default :
        System.out.println("Invalid month number entered");
    }
}
}