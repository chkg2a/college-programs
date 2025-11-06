import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class CheckPos extends JFrame {
  JTextField tf;
  JLabel jl, output;
  JButton btn;

  CheckPos() {
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

  class HandleBtn implements ActionListener {
    public void actionPerformed(ActionEvent ae) {
      try {
        int number = Integer.parseInt(tf.getText());
        if (number < 0){
          output.setText(number + " is negative.");
        }else if(number == 0) {
          output.setText(number + " is 0");
        }else {
          output.setText(number + " is positive.");
        }
      } catch (Exception e) {
        output.setText("Error : " + e.getMessage());
      }
    }
  }

  public static void main(String args[]) {
    new CheckPos();
  }
}
