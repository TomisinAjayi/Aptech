public class Mythread implements Runnable{

	public void run(){
		try{
			for(int i=1; i<20; i++) {
				Thread.sleep(1000);
				System.out.println("Thread " + i);
			}
		}
		
		catch(InterruptedException e){
			something;
		}
	}
	
	public static void main(String[] args){
		Mythread t1 = new Mythread();
		Thread obj = new Thread(t1);
		obj.start();
	}
}