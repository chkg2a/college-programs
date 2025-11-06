import javax.swing.*;

class MyBoxLayout2 extends JFrame {
  JButton b1, b2, b3, b4, b5;
  JPanel jp;

  MyBoxLayout2() {
    setTitle("YMS BoxLayout ");
    setVisible(true);
    setSize(500, 500);
    setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    jp = new JPanel();
    setContentPane(jp);
    jp.setLayout(new BoxLayout(jp, BoxLayout.X_AXIS));
    b1 = new JButton("button1");
    b2 = new JButton("button1");
    b3 = new JButton("button1");
    b4 = new JButton("button1");
    b5 = new JButton("button1");
    add(b1);
    add(b2);
    add(b3);
    add(b4);
    add(b5);
  }

  public static void main(String arg[]) {
    new MyBoxLayout2();
  }
}
