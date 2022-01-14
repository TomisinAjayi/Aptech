//x = -b +- /b^2 - 4ac divided 2a

import java.util.Scanner;
public class Quad{
	public static void main(String[] args) {
		
		Scanner pencil = new Scanner(System.in);
		System.out.println("Quadratic equation.");
		System.out.println("Enter a");
		double a = pencil.nextDouble();
		System.out.println("Enter b");
		double b = pencil.nextDouble();
		System.out.println("Enter c");
		double c = pencil.nextDouble();
		
		double x1 = 0.0;
		double x2 = 0.0;
		double ran = ((b*b) - (4*a*c));
		x1 = ( -1*b + (Math.sqrt(ran)) ) / 2*a ;
		x2 = ( -1*b - (Math.sqrt(ran)) ) / 2*a ;
		System.out.printf("X is either %f or %f", x1, x2);
	}
}