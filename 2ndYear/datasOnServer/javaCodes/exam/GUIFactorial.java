import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class Bro {
  int data;
  void display(){
    System.out.println(data);
  }
}

class GUIFactorial extends JFrame {
  JLabel jl, output;
  JTextField tf;
  JButton btn, btn2, btn3;

  GUIFactorial() {
    setup();
    setup_components();
  }

  void setup() {
    setSize(300, 400);
    setLayout(null);
    setVisible(true);
    setDefaultCloseOperation(EXIT_ON_CLOSE);
  }

  void setup_components() {
    jl = new JLabel("Enter a number:");
    tf = new JTextField();
    output = new JLabel("Result : ");
    btn = new JButton("Calculate");
    btn2 = new JButton("Print hello");
    btn3 = new JButton("BRUH");

    jl.setBounds(20, 100, 150, 30);
    tf.setBounds(20, 150, 150, 30);
    output.setBounds(20, 200, 150, 30);
    btn.setBounds(20, 250, 150, 30);
    btn2.setBounds(20, 300, 150, 30);
    btn3.setBounds(20, 350, 150, 30);

    add(jl);
    add(tf);
    add(output);
    add(btn);
    add(btn2);
    add(btn3);

    btn.addActionListener(new Handle());
    btn2.addActionListener(new Handle());
    btn3.addActionListener(new Handle());
  }

  int factorial(int x) {
    if (x < 1)
      return 1;
    return x * factorial(x - 1);
  }

  class Handle implements ActionListener {
    public void actionPerformed(ActionEvent ae) {
      Object sc = ae.getSource();
      if (sc == btn) {
        try {
          int num = Integer.parseInt(tf.getText());
          output.setText("Result: " + factorial(num));
        } catch (Exception e) {
          output.setText("Error" + e.getMessage());
        }

      }
      else if(sc == btn2){
        output.setText("Hello World");
      }
      else {
        output.setText("Abudabi");
      }
    }
  }

  public static void main(String args[]) {
    Bro b = new Bro();
    b.data = 50;
    b.display();
    // new GUIFactorial();
  }
}
