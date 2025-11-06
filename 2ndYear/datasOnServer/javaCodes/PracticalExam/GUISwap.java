import javax.swing.*;
import java.awt.event.*;

class GUISwap extends JFrame {
  JLabel jl1, jl2, output;
  JTextField tf1, tf2;
  JButton btn;

  GUISwap() {
    set_components();
    setup();
  }
  GUISwap(String str) {
    super(str);
    set_components();
    setup();
  }

  void set_components(){
    jl1 = new JLabel("x");
    jl2 = new JLabel("y");
    btn = new JButton("Swap");
    tf1 = new JTextField();
    tf2 = new JTextField();
    output = new JLabel();
    JLabel useless = new JLabel();

    jl1.setBounds(125,130,50,30);
    jl2.setBounds(200,130,50,30);
    tf1.setBounds(125,160,50,30);
    tf2.setBounds(200,160,50,30);
    btn.setBounds(125,210,150,30);
    output.setBounds(125,260,150,30);
    useless.setBounds(125,260,150,30);

    add(jl1);
    add(jl2);
    add(tf1);
    add(tf2);
    add(btn);
    add(output);
    add(useless);

    btn.addActionListener(new ActionListener() {
      public void actionPerformed(ActionEvent e){
        try {
          int num1 = Integer.parseInt(tf1.getText());
          int num2 = Integer.parseInt(tf2.getText());
          tf1.setText(Integer.toString(num2));
          tf2.setText(Integer.toString(num1));
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

  public static void main(String args[]){
    GUISwap gui = new GUISwap();
  }
}
