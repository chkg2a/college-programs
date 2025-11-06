import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class GUILargest5 extends JFrame {
  JLabel jl1,jl2,jl3,jl4,jl5, output;
  JTextField tf1,tf2,tf3,tf4,tf5;
  JButton btn;
  JPanel main_panel, rp1,rp2,rp3,rp4,rp5;

  GUILargest5() {
    set_components();
    setup();
  }
  GUILargest5(String str) {
    super(str);
    set_components();
    setup();
  }

  void set_components(){
    jl1 = new JLabel("Enter 1st number:");
    jl2 = new JLabel("Enter 2nd number:");
    jl3 = new JLabel("Enter 3rd number:");
    jl4 = new JLabel("Enter 4th number:");
    jl5 = new JLabel("Enter 5th number:");
    btn = new JButton("Find Largest");
    tf1 = new JTextField();
    tf2 = new JTextField();
    tf3 = new JTextField();
    tf4 = new JTextField();
    tf5 = new JTextField();
    output = new JLabel();

    main_panel = new JPanel();
    rp1 = new JPanel();
    rp2 = new JPanel();
    rp3 = new JPanel();
    rp4 = new JPanel();
    rp5 = new JPanel();
    
    main_panel.setLayout(new BoxLayout(main_panel, BoxLayout.Y_AXIS));
    main_panel.setBorder(BorderFactory.createEmptyBorder(20,20,20,20));

    rp1.setLayout(new BoxLayout(rp1,BoxLayout.X_AXIS));
    rp2.setLayout(new BoxLayout(rp2,BoxLayout.X_AXIS));
    rp3.setLayout(new BoxLayout(rp3,BoxLayout.X_AXIS));
    rp4.setLayout(new BoxLayout(rp4,BoxLayout.X_AXIS));
    rp5.setLayout(new BoxLayout(rp5,BoxLayout.X_AXIS));

    rp1.add(jl1);
    rp1.add(Box.createRigidArea(new Dimension(10,0)));
    rp1.add(tf1);

    rp2.add(jl2);
    rp2.add(Box.createRigidArea(new Dimension(10,0)));
    rp2.add(tf2);

    rp3.add(jl3);
    rp3.add(Box.createRigidArea(new Dimension(10,0)));
    rp3.add(tf3);

    rp4.add(jl4);
    rp4.add(Box.createRigidArea(new Dimension(10,0)));
    rp4.add(tf4);

    rp5.add(jl5);
    rp5.add(Box.createRigidArea(new Dimension(10,0)));
    rp5.add(tf5);

    main_panel.add(rp1);
    main_panel.add(rp2);
    main_panel.add(rp3);
    main_panel.add(rp4);
    main_panel.add(rp5);
    main_panel.add(btn);
    main_panel.add(output);

    add(main_panel);

    btn.addActionListener(new ActionListener() {
      public void actionPerformed(ActionEvent e){
        output.setText(Integer.toString(find_largest()));
      }
    });
  }

  void setup(){
    setSize(400,500);
    setVisible(true);
    setDefaultCloseOperation(EXIT_ON_CLOSE);
  }

  int find_largest(){
    try{
      int t1 = Integer.parseInt(tf1.getText());
      int t2 = Integer.parseInt(tf2.getText());
      int t3 = Integer.parseInt(tf3.getText());
      int t4 = Integer.parseInt(tf4.getText());
      int t5 = Integer.parseInt(tf5.getText());

      int largest = Math.max(t1,t2);
      largest = Math.max(largest,t3);
      largest = Math.max(largest,t4);
      largest = Math.max(largest,t5);
      return largest; 
    }catch(Exception e){
      System.out.println("Error : " + e.getMessage());
      return 0;
    }
  }

  public static void main(String args[]){
    new GUILargest5();
  }
}
