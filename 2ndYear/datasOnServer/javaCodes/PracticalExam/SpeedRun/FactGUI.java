import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class FactGUI extends JFrame {
  JTextField tf;
  JLabel jl, output;
  JButton btn;

  FactGUI() {
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
    tf = new JTextField();
    jl = new JLabel("Enter a number: ");
    output = new JLabel("Result : ");
    btn = new JButton("Calculate");

    jl.setBounds(20, 100, 150, 30);
    tf.setBounds(20, 150, 150, 30);
    btn.setBounds(20, 200, 150, 30);
    output.setBounds(20, 250, 150, 30);

    add(jl);
    add(output);
    add(tf);
    add(btn);

    btn.addActionListener(new HandleBtn());
  }

  int factorial(int a) {
    if (a <= 1)
      return 1;

    return a * factorial(a - 1);
  }

  class HandleBtn implements ActionListener {
    public void actionPerformed(ActionEvent ae) {
      try {
        int number = Integer.parseInt(tf.getText());
        output.setText("Result + " + factorial(number));
      } catch (Exception e) {
        output.setText("Error : " + e.getMessage());
      }
    }
  }

  public static void main(String args[]) {
    new FactGUI();
  }
}
