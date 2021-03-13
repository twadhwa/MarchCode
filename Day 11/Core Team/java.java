import java.util.Scanner;

public class DayEleven {
	public static int gcd (int a, int b) {
		if(a == 0) {
			return b;
		}
		return gcd(b%a, a);
	}
	
	public static int lcm(int a, int b) {
		return (a*b)/ gcd(a,b);
	}
	
	public static void main(String[] args) {
		Scanner sc =  new Scanner(System.in);
		
		System.out.println("Enter first number : ");
		int a = sc.nextInt();
		System.out.println("Enter second number : ");
		int b = sc.nextInt();
		
		System.out.println("LCM of "+a+" and "+b+" is: "+gcd(a,b));
		
		sc.close();
	}
}