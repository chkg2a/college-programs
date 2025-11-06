import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class Palindrome extends JFrame {
  JTextField tf;
  JLabel jl, output;
  JButton btn;

  Palindrome() {
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
    jl = new JLabel("Enter a String: ");
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

  boolean check_palindrome(int num){
    int orig = num;
    int reverse = 0;
    while (num > 0){
      reverse = reverse * 10 + num % 10; 
      num /= 10;
    }
    return orig == reverse;
  }

  class HandleBtn implements ActionListener {
    public void actionPerformed(ActionEvent ae) {
      try {
        int number = Integer.parseInt(tf.getText());
        if (check_palindrome(number)){
          output.setText(tf.getText() + " is palindrome.");
        }else{
          output.setText(tf.getText() + " is not a palindrome.");
        }
      } catch (Exception e) {
        output.setText("Error : " + e.getMessage());
      }
    }
  }

  public static void main(String args[]) {
    new Palindrome();
  }
}
