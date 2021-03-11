import java.util.Scanner;

public class DayEight {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		int factorial = 1;
		
		
		for(int i = n ; i>0 ; i--) {
			factorial*= i;
		}
		
		System.out.println("Factorial of "+n+" is "+factorial+" ");
		
		sc.close();
	}
}