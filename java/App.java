import java.util.Scanner;
public class App{
	public static void main(String[] args){
		Scanner num = new Scanner(System.in);
		System.out.println("Enter a number.");
		int a = num.nextInt();
		
		System.out.println("Enter another number.");
		int b = num.nextInt();
		
		System.out.println("1. Addition");
		System.out.println("2. Subtraction");
		System.out.println("3. Multiplication");
		System.out.println("4. Division");
		System.out.println("Enter choice");
		int choice = num.nextInt();
		
		
		switch(choice) {
			case '1': a + b
	}
}