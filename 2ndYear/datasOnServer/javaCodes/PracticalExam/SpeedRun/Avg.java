import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class Avg extends JFrame {
  JTextField tf1,tf2,tf3;
  JLabel jl, output;
  JButton btn;

  Avg() {
    setup();
    setup_components();
  }

  void setup() {
    setSize(200, 300);
    setLayout(null);
    setDefaultCloseOperation(EXIT_ON_CLOSE);
    setVisible(true);
  }

  void setup_components() {
    tf1 = new JTextField();
    tf2 = new JTextField();
    tf3 = new JTextField();
    jl = new JLabel("Enter a String: ");
    output = new JLabel("Result : ");
    btn = new JButton("Calculate");

    jl.setBounds(20, 100, 150, 30);
    tf1.setBounds(20, 150, 150, 30);
    tf2.setBounds(20, 175, 150, 30);
    tf3.setBounds(20, 200, 150, 30);
    btn.setBounds(20, 225, 150, 30);
    output.setBounds(20, 250, 150, 30);

    add(jl);
    add(output);
    add(tf1);
    add(tf2);
    add(tf3);
    add(btn);

    btn.addActionListener(new HandleBtn());
  }

  class HandleBtn implements ActionListener {
    public void actionPerformed(ActionEvent ae) {
      try {
        int num1 = Integer.parseInt(tf1.getText());
        int num2 = Integer.parseInt(tf2.getText());
        int num3 = Integer.parseInt(tf3.getText());
        output.setText("Result : " + (num1 + num2 + num3) /3 );
      } catch (Exception e) {
        output.setText("Error : " + e.getMessage());
      }
    }
  }

  public static void main(String args[]) {
    new Avg();
  }
}
