public class Myinterface implements Tomi{
	public String eat(){
		return "I am something";
	}
	public void walk(){
		System.out.println("i am something");
	}
	public static void main(String[] args) {
		Myinterface m = new Myinterface();
		m.eat();
	}
}