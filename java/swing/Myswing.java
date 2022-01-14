import javax.swing.*;
// import java.awa.*; without J.
public class Myswing extends JFrame{
	public Myswing(){
		super("My Frame");
		
		JButton btn = new JButton("Click me");
		btn.setBounds(130,100,100,40);
		add(btn);
		pack();
		setSize(700,600);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setVisible(true);
	}
	public static void main(String[] args) {
		Myswing ms = new Myswing();
	}
}