import javax.swing.*;
import java.awt.event.*;

class GUIFactorial extends JFrame {
  JLabel l, output;
  JTextField tf;
  JButton btn;

  GUIFactorial() {
  }

  GUIFactorial(String str) {
    super(str);
  }

  void set_component() {
    tf = new JTextField();
    l = new JLabel("Enter a number");
    btn = new JButton("Calculate!");
    output = new JLabel();
    JLabel useless = new JLabel();

    l.setBounds(125, 100, 150, 30);
    tf.setBounds(125, 140, 150, 30);
    btn.setBounds(125, 180, 150, 30);
    output.setBounds(125, 220, 150, 30);
    useless.setBounds(125, 220, 150, 30);

    add(l);
    add(tf);
    add(btn);
    add(output);
    add(useless);

    btn.addActionListener(new ActionListener() {
      public void actionPerformed(ActionEvent e) {
        try {
          int num = Integer.parseInt(tf.getText());
          int fact = calculateFactorial(num);
          output.setText("Factorial: " + fact);
        } catch (NumberFormatException ex) {
          output.setText("Please enter a valid number");
        }
      }
    });
  }

  void setup(GUIFactorial gui) {
    gui.set_component();
    gui.setVisible(true);
    gui.setSize(400, 500);
    gui.setLayout(null);
    gui.setDefaultCloseOperation(EXIT_ON_CLOSE);
  }

  int calculateFactorial(int i) {
    if (i <= 1) {
      return 1;
    }
    return i * calculateFactorial(i - 1);
  }

  public static void main(String args[]) {
    GUIFactorial gui = new GUIFactorial();
    gui.setup(gui);
  }
}
