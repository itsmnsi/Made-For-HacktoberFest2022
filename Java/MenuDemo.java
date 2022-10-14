
import java.awt.*;
import java.awt.event.*;

class MenuDemo extends Frame implements ActionListener
{

	String s;

	MenuDemo()
    {
	setTitle("Notepad");
	setSize(600,500);
	setFont(new Font("Osward",Font.BOLD,12));
	setLayout(null);
	setVisible(true);
    MenuShortcut ms;
	
	MenuBar mb= new MenuBar();
	setMenuBar(mb);
	
	Menu m1= new Menu("File");
	
	Menu m2= new Menu("Edit");
	Menu m3= new Menu("Format");
	Menu m4= new Menu("View");
	Menu m5= new Menu("Help");
	Menu m6= new Menu("Zoom");
	mb.add(m1);
	mb.add(m2);
	mb.add(m3);
	mb.add(m4);
	mb.add(m5);
    ms = new MenuShortcut(KeyEvent.VK_X);
	MenuItem mi1= new MenuItem("New",ms);
	MenuItem mi2= new MenuItem("New Window");
	MenuItem mi3= new MenuItem("Open..");
	MenuItem mi4= new MenuItem("Save");
	MenuItem mi5= new MenuItem("Save As...");
	MenuItem mi6= new MenuItem("Page setup..");
	MenuItem mi7= new MenuItem("Print...");
	MenuItem mi8= new MenuItem("Exit");
	MenuItem mi9= new MenuItem("New");
	m1.add(mi1);
	m1.add(mi2);
	m1.add(mi3);
	m1.add(mi4);
	m1.add(mi5);
	m4.add(m6);
	m1.addSeparator();
	m1.add(mi6);
	m1.add(mi7);
	m1.add(mi8);
	m1.addSeparator();
	m1.add(mi9);
	MenuItem me1= new MenuItem("Undo");
	MenuItem me2= new MenuItem("Cut");
	MenuItem me3= new MenuItem("Copy");
	MenuItem me4= new MenuItem("Paste");
	MenuItem me5= new MenuItem("Delete");
	MenuItem me6= new MenuItem("Search with Bing...");
	MenuItem me7= new MenuItem("Find...");
	MenuItem me8= new MenuItem("Find Next");
	MenuItem me9= new MenuItem("Find Previous");
	MenuItem me10= new MenuItem("Replace...");
	MenuItem me11= new MenuItem("Go to...");
	MenuItem me12= new MenuItem("Select All");
	MenuItem me13= new MenuItem("Time/Date");
	m2.add(me1);
	m2.addSeparator();
	m2.add(me2);
	m2.add(me3);
	m2.add(me4);
	m2.add(me5);
	m2.addSeparator();
	m2.add(me6);
	m2.add(me7);
	m2.add(me8);
	m2.add(me9);
	m2.add(me10);
	m2.add(me11);
	m2.addSeparator();
	m2.add(me12);
	m2.add(me13);
	CheckboxMenuItem cmi1= new CheckboxMenuItem("Wordrap",true);
	CheckboxMenuItem cmi2= new CheckboxMenuItem("Font");	
	m3.add(cmi1);
	m3.add(cmi2);
	CheckboxMenuItem cmi4= new CheckboxMenuItem("Status Bar",true);	
	m4.add(cmi4);
	MenuItem mhe1 = new MenuItem("View Help");
	MenuItem mhe2 = new MenuItem("Send Feedback");
	MenuItem mhe3 = new MenuItem("About Notepad");
	m5.add(mhe1);
	m5.add(mhe2);
	m5.addSeparator();
	m5.add(mhe3);
	MenuItem mz1 = new MenuItem("Zoom In");
	MenuItem mz2 = new MenuItem("Zoom Out");
	MenuItem mz3 = new MenuItem("Restore Default Zoom");
	m6.add(mz1);
	m6.add(mz2);
	m6.add(mz3);
	mi1.addActionListener(this);
    }	

public void actionPerformed (ActionEvent ae)
{
	
	
	}

public static void main(String args [])
{
  	MenuDemo md = new MenuDemo();
	}
}
