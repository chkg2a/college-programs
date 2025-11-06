import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class GUIGrid extends JFrame {
  JButton btn1, btn2, btn3, btn4, btn5, btn6;
  JLabel jl1, jl2, jl3, jl4, jl5, jl6;
  Font font;

  GUIGrid (){
    setup();
    set_components();
  }

  GUIGrid (String str){
    super(str);
    setup();
    set_components();
  }

  void setup(){
    setVisible(true);
    setSize(400,400);
    setLayout(new GridLayout(4,3));
    setDefaultCloseOperation(EXIT_ON_CLOSE);
  }

  void set_components(){
    font = new Font("Serif", Font.BOLD, 18);
    btn1 = new JButton("1"); 
    btn2 = new JButton("2"); 
    btn3 = new JButton("3"); 
    btn4 = new JButton("4"); 
    btn5 = new JButton("5"); 
    btn6 = new JButton("6"); 
    jl1 = new JLabel("Renne Bright", SwingConstants.CENTER);
    jl2 = new JLabel("Shalltear BloodFallen", SwingConstants.CENTER);
    jl3 = new JLabel("Josee", SwingConstants.CENTER);
    jl4 = new JLabel("Kurumi Tokisaki", SwingConstants.CENTER);
    jl5 = new JLabel("Bocchi", SwingConstants.CENTER);
    jl6 = new JLabel("C.C.", SwingConstants.CENTER);

    add(jl1);
    add(jl2);
    add(jl3);
    add(jl4);
    add(jl5);
    add(jl6);
    add(btn1);
    add(btn2);
    add(btn3);
    add(btn4);
    add(btn5);
    add(btn6);

    btn1.addActionListener(new Handler_BTN1());
    btn2.addActionListener(new Handler_BTN2());
    btn3.addActionListener(new Handler_BTN3());
    btn4.addActionListener(new Handler_BTN4());
    btn5.addActionListener(new Handler_BTN5());
    btn6.addActionListener(new Handler_BTN6());
  }

  void set_default_font(){
    jl1.setFont(UIManager.getFont("Label.font"));
    jl1.setForeground(UIManager.getColor("Label.foreground"));
    jl2.setFont(UIManager.getFont("Label.font"));
    jl2.setForeground(UIManager.getColor("Label.foreground"));
    jl3.setFont(UIManager.getFont("Label.font"));
    jl3.setForeground(UIManager.getColor("Label.foreground"));
    jl4.setFont(UIManager.getFont("Label.font"));
    jl4.setForeground(UIManager.getColor("Label.foreground"));
    jl5.setFont(UIManager.getFont("Label.font"));
    jl5.setForeground(UIManager.getColor("Label.foreground"));
    jl6.setFont(UIManager.getFont("Label.font"));
    jl6.setForeground(UIManager.getColor("Label.foreground"));
  }

  class Handler_BTN1 implements ActionListener {
    public void actionPerformed(ActionEvent e){
      set_default_font();
      jl1.setFont(font);
      jl1.setForeground(Color.PINK);
    }
  }
  class Handler_BTN2 implements ActionListener {
    public void actionPerformed(ActionEvent e){
      set_default_font();
      jl2.setFont(font);
      jl2.setForeground(Color.RED);
    }
  }
  class Handler_BTN3 implements ActionListener {
    public void actionPerformed(ActionEvent e){
      set_default_font();
      jl3.setFont(font);
      jl3.setForeground(Color.YELLOW);
    }
  }
  class Handler_BTN4 implements ActionListener {
    public void actionPerformed(ActionEvent e){
      set_default_font();
      jl4.setFont(font);
      jl4.setForeground(Color.RED);
    }
  }
  class Handler_BTN5 implements ActionListener {
    public void actionPerformed(ActionEvent e){
      set_default_font();
      jl5.setFont(font);
      jl5.setForeground(Color.PINK);
    }
  }
  class Handler_BTN6 implements ActionListener {
    public void actionPerformed(ActionEvent e){
      set_default_font();
      jl6.setFont(font);
      jl6.setForeground(Color.GREEN);
    }
  }

  public static void main(String args[]){
    new GUIGrid("Waifu");
  }
}
