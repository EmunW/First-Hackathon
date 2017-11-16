package Code;

//My submission to the UB Hackathon 2017. I am currently only in CSE 115 - Introduction to Computer Science For Majors.
//This app isn't really a quiz app, but more like a flash card app.

import java.awt.Color;
import java.awt.Dimension;
import java.awt.FlowLayout;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Random;
import java.util.concurrent.ThreadLocalRandom;

import javax.swing.BoxLayout;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JTextArea;
import javax.swing.JTextField;
import javax.swing.SwingUtilities;


public class Quiz{
	private Integer i = 0;
	private Integer c = 0;
	private Integer x = 0;
	private Integer z = 0;
	private Integer k = 0;
	private Integer points = 0;
	public JTextArea Text;
	private int relation;
    public Quiz(JPanel m){
    	HashMap<Integer, String> Question = new HashMap<Integer, String>();
        Font font = new Font("Courier", Font.PLAIN, 20);
        Text = new JTextArea("Type in a question", 12, 80);
        Text.setFont(font);
        JButton nextQuestion = new JButton("Next Question");
        m.add(nextQuestion);
        m.add(Text);
        nextQuestion.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent e){
            	Question.put(i, Text.getText());
            	i++;
                Text.setText("");
            }
        });
        /*nextQuestion.addActionListener(new QuestionButton(){
                
            });
        */
        
        //Answer input
        HashMap<Integer, String> Answer = new HashMap<Integer, String>();
        JTextArea Text2 = new JTextArea("Type the answer for the question above", 12, 80);
        Text2.setFont(font);
        JButton nextAnswer = new JButton("Next Answer");
        m.add(nextAnswer);
        m.add(Text2);
        m.setBackground(Color.gray);
        nextAnswer.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent e){
            	Answer.put(x, Text2.getText());
            	x++;
                Text2.setText("");
            }
        });
        ArrayList<String> Previous = new ArrayList<String>();
        JTextArea Text3 = new JTextArea("Random question will be displayed here", 12, 80);
        Text3.setFont(font);
        JButton Scramble = new JButton("Random Question");
        m.add(Scramble);
        m.add(Text3);
        Scramble.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent e){
            	Random rand = new Random();
            	relation = rand.nextInt(Question.size());
            	
            	/*while(Previous.contains(Question.get(relation))) {
            		relation = rand.nextInt(Question.size());
            		Previous.add(Question.get(relation));
            		if(c >= Question.size()) {
            			break;
            		}
            	}
            	c++;*/
            	Previous.add(Question.get(relation));
            	Text3.setText(Question.get(relation));
            	k = relation;
            }
        });
        
        JTextArea Text4 = new JTextArea("Correct answer will be displayed here", 12, 80);
        JTextArea Text5 = new JTextArea("Answer the random question here", 12, 80);
        Text5.setFont(font);
        JButton questionAnswer = new JButton("Final Answer?");
        m.add(questionAnswer);
        m.add(Text5);
        questionAnswer.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent e){
            	if(Text5.getText().equals(Answer.get(k))) {
            		z++;
            		points++;
            		System.out.println("Correct! You have " + z + "/" + points + " points");
            	}
            	else {
            		points++;
            		System.out.println("Incorrect! You have " + z + "/" + points + " points");
            	}
            }
        });
        
        Text4.setFont(font);
        m.setLayout(new BoxLayout(m, BoxLayout.Y_AXIS));
        JButton yourAnswer = new JButton("Show Answer");
        m.add(yourAnswer);
        m.add(Text4);
        yourAnswer.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent e){
            	Text4.setText(Answer.get(k));
            }
        });
            }
    
	    public static void main(String[] args){
	        SwingUtilities.invokeLater(new Runnable() {
	            @Override
	            public void run() {
	            	JFrame frame = new JFrame();
	            	JPanel p = new JPanel();
	        		frame.add(p);
	        		new Quiz(p);
	        		frame.pack();
	        		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	        		frame.setVisible(true);
	            }
	        });
	    }

	}
