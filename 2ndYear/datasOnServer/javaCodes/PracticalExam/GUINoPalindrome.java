import javax.swing.*;
import java.awt.event.*;

class GUINoPalindrome extends JFrame {
  JLabel jl, output;
  JTextField tf;
  JButton btn;

  GUINoPalindrome() {
    set_components();
    setup();
  }
  GUINoPalindrome(String str) {
    super(str);
    set_components();
    setup();
  }

  void set_components(){
    jl = new JLabel("Enter a number :");
    btn = new JButton("Check");
    tf = new JTextField();
    output = new JLabel();
    JLabel useless = new JLabel();

    jl.setBounds(125,110,150,30);
    tf.setBounds(125,160,150,30);
    btn.setBounds(125,210,150,30);
    output.setBounds(125,260,150,30);
    useless.setBounds(125,260,150,30);

    add(jl);
    add(tf);
    add(btn);
    add(output);
    add(useless);

    btn.addActionListener(new ActionListener() {
      public void actionPerformed(ActionEvent e){
        try {
          String text = tf.getText();
          if ( isPalindrome(text))
            output.setText(text + " is a palindrome.");
          else
            output.setText(text + " is not a palindrome.");
        }catch (Exception exc){
          output.setText("Error : " + exc.getMessage());
        }
      }
    });
  }

  void setup(){
    setSize(400,500);
    setVisible(true);
    setLayout(null);
    setDefaultCloseOperation(EXIT_ON_CLOSE);
  }

  boolean isPalindrome(String str){
    try {
      int number = Integer.parseInt(str);
      int origNum = number;
      int reverseNum = 0;
      while(number != 0){
        reverseNum = reverseNum * 10 + number % 10;
        number /= 10;
      }
      System.out.println(reverseNum);
      return origNum == reverseNum;
    }catch(Exception e) {
      System.out.println("Error :" + e.getMessage());
    }
    return false;
  }
  public static void main(String args[]){
    new GUINoPalindrome();
  }
}
