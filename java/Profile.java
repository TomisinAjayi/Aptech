import java.util.Scanner;

public class Profile{
	public static void main(String[] args) {
		Scanner person = new Scanner(System.in);
		
		System.out.println("What is your name?");
		String name = person.nextLine();
		System.out.println("How old are you?");
		int age = person.nextInt();
		System.out.println("Your name is " + name + " and you are " + age + " years old.");
	}
}