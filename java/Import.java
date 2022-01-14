import ttt.Adeola;
public class Import{
	
	public String eat(){
		return "I can eat twice as much as you can";
	}
	
	public static void main(String[] args){
	
		//ttt.Adeola = new ttt.Adeola(); //without import
		Adeola tom = new Adeola();
		Import b = new Import();
		System.out.println(b.eat());
	}
}