import java.util.Scanner;

public class DayThree {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter the month number : ");
		int month = sc.nextInt();
		
		if(month >= 1 && month <= 12) {
			// Assuming that the year is not Leap Year.
			if(month == 2) {
				System.out.println("28 days");
			}else if(month <= 7 && month % 2 != 0) {
				System.out.println("31 days");
			}else if(month > 7 && month % 2 == 0) {
				System.out.println("31 days");
			}else 
				System.out.println("30 days");
		}else 
			System.out.println("Please enter a valid number of month!");

		sc.close();
	}
}