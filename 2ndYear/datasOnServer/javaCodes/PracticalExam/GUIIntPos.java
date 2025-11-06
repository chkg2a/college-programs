import javax.swing.*;
import java.awt.event.*;

class GUIIntPos extends JFrame {
  JLabel jl, output;
  JTextField tf;
  JButton btn;

  GUIIntPos() {
    set_components();
    setup();
  }
  GUIIntPos(String str) {
    super(str);
    set_components();
    setup();
  }

  void set_components(){
    jl = new JLabel("Enter a number:");
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
          int num = Integer.parseInt(tf.getText());
          int checked = check_number(num);
          System.out.println(checked);
          switch(checked){
            case 0:
              output.setText(num + " is zero");
              break;
            case 1:
              output.setText(num + " is positive");
              break;
            case -1:
              output.setText(num + " is negative");
              break;
            default:
              output.setText("Error checking number");
              break;
          }
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

  int check_number(int num){
    if(num == 0) {
      return 0;
    }
    else if (num < 0) {
      return -1;
    }
    else{
      return 1;
    }
  }

  public static void main(String args[]){
    GUIIntPos gui = new GUIIntPos();
  }
}
