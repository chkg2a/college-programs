import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class GridMaze extends JFrame {
  JButton btn1, btn2, btn3, btn4, btn5, btn6;
  JLabel jl1,jl2,jl3,jl4,jl5,jl6;

  GridMaze() {
    setup();
    setup_components();
  }

  void setup() {
    setSize(200, 300);
    setLayout(new GridLayout(4,3));
    setDefaultCloseOperation(EXIT_ON_CLOSE);
    setVisible(true);
  }

  void setup_components() {
    jl1 = new JLabel("Hello");
    jl2 = new JLabel("Renne");
    jl3 = new JLabel("Bright");
    jl4 = new JLabel("Is");
    jl5 = new JLabel("the");
    jl6 = new JLabel("best");
    btn1 = new JButton("1"); 
    btn2 = new JButton("2"); 
    btn3 = new JButton("3"); 
    btn4 = new JButton("4"); 
    btn5 = new JButton("5"); 
    btn6 = new JButton("6"); 

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

  }

  public static void main(String args[]) {
    new GridMaze();
  }
}
