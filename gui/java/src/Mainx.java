
package src;

import java.util.*;

// gui library
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;


public class Mainx{
	public static void main(String[] args){


		// gui
		// frame
		JFrame fr = new JFrame("Simple");
		fr.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

		// body
		JPanel panel = new JPanel();
		panel.setLayout(new BoxLayout(panel, BoxLayout.Y_AXIS));

		// label
		panel.add(new JLabel("Hello from java swing"));


		// text box
		JTextField input = new JTextField(30);
		panel.add(input);

		// button
		JButton btn = new JButton("Click me");
		btn.addActionListener(new ActionListener(){
			public void actionPerformed(ActionEvent e){
				JOptionPane.showMessageDialog(null, input.getText());
			}
		});
		panel.add(btn);


		fr.add(panel);
		// frame
		fr.pack();
		fr.setVisible(true);
	}
}



