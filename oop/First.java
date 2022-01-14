import javax.swing.JFrame;
import java.awt.*;

public class First extends JFrame {
    public First() {
        // Button btn = new Button("Click me");
        
        // btn.setBounds(20,50,100,60);
       
        // add(btn);
        
        setTitle("This is coming from the third file.");
        TextField f = new TextField("Tomisin");
        add(f);
        new Second();

        setSize(600,600);
        setLocation(400,400);
        setDefaultCloseOperation(1);

        setVisible(true);
    }
}