import java.util.Scanner;
public class Loop{
	public static void main(String[] args) {
		
		Scanner pencil = new Scanner(System.in);
		System.out.println("Enter the number of times you want to find");
		int a = pencil.nextInt();
		System.out.println("Enter a number to find it's multiples");
		int two = pencil.nextInt();
		//for(int b = 1; b <= a; b++){
			//System.out.printf("%d x %d = %d\n", two, b, two*b);
		//}
		int b = 1;
		while(b <= a) {
			System.out.printf("%d x %d = %d\n", two, b, two*b);
			b++;
		}
	}
}