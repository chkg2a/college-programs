import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class Test extends JFrame {
  JButton btn1, btn2, btn3, btn4, btn5;
  Container c;
  JPanel jp;
  ImageIcon img;

  Test() {
    setup();
    setup_component();
  }

  Test(String str) {
    super(str);
    setup();
    setup_component();
  }

  void setup() {
    setVisible(true);
    setSize(300, 400);
    setLayout(new BorderLayout(5, 20));
  }

  void setup_component() {
    c = this.getContentPane();
    c.setBackground(Color.gray);

    img = new ImageIcon("/home/xrenne/local_drive/Pictures/Imgur Album/122 - fNls9ox.jpg");
    setIconImage(img.getImage());

    btn1 = new JButton("NORTH");
    btn2 = new JButton("WEST");
    btn3 = new JButton("EAST");
    btn4 = new JButton("CENTER");
    btn5 = new JButton("SOUTH");

    jp = new JPanel();
    jp.setBackground(Color.YELLOW);
    jp.setBounds(100, 200, 200, 250);
    jp.add(btn1);


    c.add(jp, BorderLayout.NORTH);
    c.add(btn2, BorderLayout.WEST);
    c.add(btn3, BorderLayout.EAST);
    c.add(btn4, BorderLayout.CENTER);
    c.add(btn5, BorderLayout.SOUTH);

    btn1.addActionListener(new Handle_Arith());
    btn2.addActionListener(new Handle_Arith());
    btn3.addActionListener(new Handle_Arith());
    btn4.addActionListener(new Handle_Arith());
    btn5.addActionListener(new Handle_Arith());
  }

  class Handle_Arith implements ActionListener {
    public void actionPerformed(ActionEvent ae) {
      if (ae.getSource() == btn1)
        getContentPane().setBackground(new Color(50, 50, 50));
      else if (ae.getSource() == btn2)
        getContentPane().setBackground(new Color(50, 50, 50));
      else if (ae.getSource() == btn3)
        getContentPane().setBackground(Color.YELLOW);
      else if (ae.getSource() == btn4)
        getContentPane().setBackground(new Color(50, 80, 70));
      else if (ae.getSource() == btn5)
        getContentPane().setBackground(new Color(10, 100, 150));
      else
        System.out.println("YO");
    }
  }

  public static void main(String args[]) {
    new Test("YOLO");
  }
}
