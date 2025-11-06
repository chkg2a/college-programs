
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class Calculator extends JFrame {
  JTextField tf1,tf2;
  JLabel jl1,jl2, output;
  JButton btn1, btn2, btn3, btn4;

  Calculator() {
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
    jl1 = new JLabel("Enter a number: ");
    jl2 = new JLabel("Enter a number: ");
    output = new JLabel("Result : ");
    btn1 = new JButton("Add");
    btn2 = new JButton("Subtract");
    btn3 = new JButton("Multiply");
    btn4 = new JButton("Divide");

    jl1.setBounds(20, 150, 150, 30);
    jl2.setBounds(20, 200, 150, 30);
    tf1.setBounds(150, 150, 150, 30);
    tf2.setBounds(150, 200, 150, 30);
    btn1.setBounds(20, 250, 50, 30);
    btn2.setBounds(80, 250, 50, 30);
    btn3.setBounds(140, 250, 50, 30);
    btn4.setBounds(200, 250, 50, 30);
    output.setBounds(20, 300, 150, 30);

    add(jl1);
    add(jl2);
    add(output);
    add(tf1);
    add(tf2);
    add(btn1);
    add(btn2);
    add(btn3);
    add(btn4);

    btn1.addActionListener(new Add());
    btn2.addActionListener(new Sub());
    btn3.addActionListener(new Mult());
    btn4.addActionListener(new Divide());
  }

  class Add implements ActionListener {
    public void actionPerformed(ActionEvent ae) {
      try {
        int num1 = Integer.parseInt(tf1.getText());
        int num2 = Integer.parseInt(tf2.getText());
        output.setText("Result : " + (num1 + num2));
      } catch (Exception e) {
        output.setText("Error : " + e.getMessage());
      }
    }
  }
  class Sub implements ActionListener {
    public void actionPerformed(ActionEvent ae) {
      try {
        int num1 = Integer.parseInt(tf1.getText());
        int num2 = Integer.parseInt(tf2.getText());
        output.setText("Result : " + (num1 - num2));
      } catch (Exception e) {
        output.setText("Error : " + e.getMessage());
      }
    }
  }
  class Mult implements ActionListener {
    public void actionPerformed(ActionEvent ae) {
      try {
        int num1 = Integer.parseInt(tf1.getText());
        int num2 = Integer.parseInt(tf2.getText());
        output.setText("Result : " + (num1 * num2));
      } catch (Exception e) {
        output.setText("Error : " + e.getMessage());
      }
    }
  }
  class Divide implements ActionListener {
    public void actionPerformed(ActionEvent ae) {
      try {
        int num1 = Integer.parseInt(tf1.getText());
        int num2 = Integer.parseInt(tf2.getText());
        output.setText("Result : " + (num1 / num2));
      } catch (Exception e) {
        output.setText("Error : " + e.getMessage());
      }
    }
  }

  public static void main(String args[]) {
    new Calculator();
  }
}
