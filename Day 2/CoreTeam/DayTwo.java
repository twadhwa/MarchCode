import java.util.Scanner;

public class DayTwo {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter a number : ");
		int number = scanner.nextInt();
		
		if(number % 11 == 0 && number % 5 == 0) {
			System.out.println("Number is divisible by both 11 and 5. ");
		}else
			System.out.println("Number is not divisible by 11 and 5."); 
		
		scanner.close();
	}
}
