import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class GUICalc extends JFrame {
  JLabel jl1, jl2, output;
  JTextField tf1,tf2;
  JButton btn1,btn2,btn3, btn4;

  GUICalc(){
    setup();
    set_components();
  }

  GUICalc(String str){
    super(str);
    setup();
    set_components();
  }

  void setup(){
    setSize(500,300);
    setLayout(null);
    setVisible(true);
    setDefaultCloseOperation(EXIT_ON_CLOSE);
  }

  void set_components(){
    int left_pad = 20;
    int top_pad = 50;
    int width = 150;
    int height = 30;
    int btn_width = 100;
    int btn_height = 40;

    jl1 = new JLabel("Enter First number:");
    jl2 = new JLabel("Enter Second number:");
    tf1 = new JTextField();
    tf2 = new JTextField();
    output = new JLabel("Result: ");
    btn1 = new JButton("Addition");
    btn2 = new JButton("Subtract");
    btn3 = new JButton("Multiply");

    jl1.setBounds(left_pad,top_pad,width,height);
    jl2.setBounds(left_pad,top_pad + 50,width,height);
    
    tf1.setBounds(left_pad + 150,top_pad, width + 50, height);
    tf2.setBounds(left_pad + 150,top_pad + 50,width+ 50,height);

    output.setBounds(left_pad,top_pad + 100,width + 150, height);

    btn1.setBounds(left_pad,top_pad + 150,btn_width,btn_height);
    btn2.setBounds(left_pad + 125,top_pad + 150,btn_width,btn_height);
    btn3.setBounds(left_pad + 250,top_pad + 150,btn_width,btn_height);

    add(jl1);
    add(jl2);
    add(output);
    add(tf1);
    add(tf2);
    add(btn1);
    add(btn2);
    add(btn3);

    btn1.addActionListener(new HANDLER_BTN1());
    btn2.addActionListener(new HANDLER_BTN2());
    btn3.addActionListener(new HANDLER_BTN3());
  }

  class HANDLER_BTN1 implements ActionListener {
    public void actionPerformed(ActionEvent ae){
      try {
        int n1 = Integer.parseInt(tf1.getText());
        int n2 = Integer.parseInt(tf2.getText());
        output.setText("Result: " + Integer.toString((n1 + n2)));
      }catch(Exception e){
        output.setText("Error : " + e.getMessage());
      }
    }
  }

  class HANDLER_BTN2 implements ActionListener {
    public void actionPerformed(ActionEvent ae){
      try {
        int n1 = Integer.parseInt(tf1.getText());
        int n2 = Integer.parseInt(tf2.getText());
        output.setText("Result: " + Integer.toString((n1 - n2)));
      }catch(Exception e){
        output.setText("Error : " + e.getMessage());
      }
    }
  }

  class HANDLER_BTN3 implements ActionListener {
    public void actionPerformed(ActionEvent ae){
      try {
        int n1 = Integer.parseInt(tf1.getText());
        int n2 = Integer.parseInt(tf2.getText());
        output.setText("Result: " + Integer.toString((n1 * n2)));
      }catch(Exception e){
        output.setText("Error : " + e.getMessage());
      }
    }
  }

  public static void main(String args[]){
    new GUICalc();
  }
}
