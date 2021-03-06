import java.awt.Graphics;
import javax.swing.JComponent;
import javax.swing.JFrame;

class MyCanvas extends JComponent {
    public void paint(Graphics g) {
        g.drawRect (10, 10, 200, 200);  
    }
}

public class DrawRect {
  public static void main(String[] args) {
    JFrame window = new JFrame("DrawRect");
    window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    window.setBounds(30, 30, 300, 300);  // spawn windows at 30, 30 with size 300 x 300
    window.getContentPane().add(new MyCanvas());
    window.setVisible(true);
  }
}


// import java.awt.Dimension;
// import java.awt.Graphics;
// import javax.swing.*;

// class DrawRect extends JPanel {
//     private static final int RECT_X = 20;
//     private static final int RECT_Y = RECT_X;
//     private static final int RECT_WIDTH = 100;
//     private static final int RECT_HEIGHT = RECT_WIDTH;

//     @Override
//     protected void paintComponent(Graphics g) {
//         super.paintComponent(g);
//         // draw the rectangle here
//         g.drawRect(RECT_X, RECT_Y, RECT_WIDTH, RECT_HEIGHT);
//     }

//     @Override
//     public Dimension getPreferredSize() {
//         // so that our GUI is big enough
//         return new Dimension(RECT_WIDTH + 2 * RECT_X, RECT_HEIGHT + 2 * RECT_Y);
//     }

//     // create the GUI explicitly on the Swing event thread
//     private static void createAndShowGui() {
//         DrawRect mainPanel = new DrawRect();

//         JFrame frame = new JFrame("DrawRect");
//         frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
//         frame.getContentPane().add(mainPanel);
//         frame.pack();
//         frame.setLocationByPlatform(true);
//         frame.setVisible(true);
//     }

//     public static void main(String[] args) {
//         SwingUtilities.invokeLater(new Runnable() {
//             public void run() {
//                 createAndShowGui();
//             }
//         });
//     }
// }