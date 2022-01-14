import javax.swing.JFrame;
import java.awt.*;

public class MainFile extends JFrame {
    public MainFile() {
        setTitle("This is coming from mainfile");
        Button btn = new Button("Click me");
        TextField f = new TextField("Tomisin");
        btn.setBounds(20,50,100,60);
       
        add(btn);
        add(f);

        setSize(400,400);
        setLocation(400,400);
        setDefaultCloseOperation(1);

        setVisible(true);
    }
}