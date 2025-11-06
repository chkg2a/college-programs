import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class GUIAvg3 extends JFrame {
  JLabel jl1, jl2, jl3, output;
  JTextField tf1, tf2, tf3;
  JButton btn;
  JPanel main_panel, rp1, rp2, rp3;

  GUIAvg3() {
    set_components();
    setup();
  }

  GUIAvg3(String str) {
    super(str);
    set_components();
    setup();
  }

  void set_components() {
    jl1 = new JLabel("Enter 1st number:");
    jl2 = new JLabel("Enter 2nd number:");
    jl3 = new JLabel("Enter 3rd number:");
    btn = new JButton("Find the Average");
    tf1 = new JTextField();
    tf2 = new JTextField();
    tf3 = new JTextField();
    output = new JLabel();

    main_panel = new JPanel();
    rp1 = new JPanel();
    rp2 = new JPanel();
    rp3 = new JPanel();

    rp1.setMaximumSize(new Dimension(300,30));
    rp2.setMaximumSize(new Dimension(300,30));
    rp3.setMaximumSize(new Dimension(300,30));

    main_panel.setLayout(new BoxLayout(main_panel, BoxLayout.Y_AXIS));
    main_panel.setBorder(BorderFactory.createEmptyBorder(20, 20, 20, 20));

    rp1.setLayout(new BoxLayout(rp1, BoxLayout.X_AXIS));
    rp2.setLayout(new BoxLayout(rp2, BoxLayout.X_AXIS));
    rp3.setLayout(new BoxLayout(rp3, BoxLayout.X_AXIS));

    rp1.add(jl1);
    rp1.add(Box.createRigidArea(new Dimension(10, 0)));
    rp1.add(tf1);

    rp2.add(jl2);
    rp2.add(Box.createRigidArea(new Dimension(10, 0)));
    rp2.add(tf2);

    rp3.add(jl3);
    rp3.add(Box.createRigidArea(new Dimension(10, 0)));
    rp3.add(tf3);

    main_panel.add(rp1);
    main_panel.add(rp2);
    main_panel.add(rp3);
    main_panel.add(btn);
    main_panel.add(output);

    add(main_panel);

    btn.addActionListener(new ActionListener() {
      public void actionPerformed(ActionEvent e) {
        output.setText("The Average is : " + Integer.toString(find_largest()));
      }
    });
  }

  void setup() {
    setSize(350, 200);
    setVisible(true);
    setDefaultCloseOperation(EXIT_ON_CLOSE);
  }

  int find_largest() {
    try {
      int t1 = Integer.parseInt(tf1.getText());
      int t2 = Integer.parseInt(tf2.getText());
      int t3 = Integer.parseInt(tf3.getText());

      return (t1 + t2 + t3) / 3;
    } catch (Exception e) {
      System.out.println("Error : " + e.getMessage());
      return 0;
    }
  }

  public static void main(String args[]) {
    new GUIAvg3();
  }
}
