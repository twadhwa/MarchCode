import java.util.Scanner;

public class DayNine {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		
		System.out.println("Enter a number : ");
		int number = sc.nextInt();
		
		int lastDigit = number%10;
		
		int firstDigit = 0;
		
		while(number >= 10) {
			number /= 10;
		}
		firstDigit = number;
		
		System.out.println("Sum of first digit: "+firstDigit+" and last digit: "+lastDigit+" is : "+(int)(lastDigit+firstDigit));
		
		sc.close();
	}
}