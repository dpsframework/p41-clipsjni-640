package examples.ide;

import javax.swing.JFrame;
import javax.swing.JScrollPane;
import javax.swing.BoxLayout;
import javax.swing.JInternalFrame;
import javax.swing.JTextArea;
import java.awt.Dimension;
import java.awt.Font;

public class ConstructInspectorFrame extends JInternalFrame
  {
   private JTextArea textArea;
   private JScrollPane inspectorPane;

   /***************************/
   /* ConstructInspectorFrame */
   /***************************/
   ConstructInspectorFrame()
     {  
      this(new Font("monospaced",Font.PLAIN,12));
     }
     
   /***************************/
   /* ConstructInspectorFrame */
   /***************************/
   ConstructInspectorFrame(
     Font theFont)
     {  
      super("Construct Inspector",true,true,false,false);

      /*===================================*/
      /* Create a new JFrame container and */
      /* assign a layout manager to it.    */
      /*===================================*/

      this.getContentPane().setLayout(new BoxLayout(this.getContentPane(),BoxLayout.Y_AXIS));
      
      /*=================================*/
      /* Give the frame an initial size. */
      /*=================================*/
     
      this.setSize(250,200);  
      this.setMinimumSize(new Dimension(200,100));
      
      /*===========================================*/
      /* The close button closes just the browser. */
      /*===========================================*/
     
      this.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);  
      
      /*==========================*/
      /* Create the button panel. */
      /*==========================*/
      
      textArea = new JTextArea();  
      inspectorPane = new JScrollPane(textArea);
      inspectorPane.setPreferredSize(new Dimension(250,200));

      this.getContentPane().add(inspectorPane); 
      
      textArea.setEditable(false);
      textArea.setFont(theFont);
      textArea.setText("(defrule hello\n   =>\n   (println \"Hello World!\"))");
            
      /*====================*/
      /* Display the frame. */
      /*====================*/

      this.pack();
     }  

   /***********/
   /* setFont */
   /***********/
   public void setFont(
     Font theFont)
     {   
      textArea.setFont(theFont);
     }
     
   /***********/
   /* setText */
   /***********/
   public void setText(
     String theText)
     {   
      textArea.setText(theText);
     }
  }