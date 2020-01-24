

using System;  
using System.Drawing;  
// using System.WinForms;  
using System.Windows.Forms;  
// class Mainx : System.WinForms.Form  
class Mainx : System.Windows.Forms.Form  
{
	Label lble;
	TextBox tbox;
	Button btn;
	Button exitBtn;

    public Mainx()  
    {  
    	this.Text = "My first form";
    	
    	lble = new Label();
    	lble.Text = "This is label";
    	lble.Size = new Size(lble.PreferredWidth, lble.PreferredHeight + 2);  
    	
    	tbox = new TextBox();
    	tbox.Location = new Point(15, 150); 
    	tbox.Size = new Size(90, 20);

    	btn = new Button();
    	btn.Text = "click me";
    	btn.Location = new Point(100, 100); 
    	btn.Size = new Size(90, 20);
    	// exitBtn = new Button();

    	this.Controls.Add(lble);
    	this.Controls.Add(tbox);
    	this.Controls.Add(btn);
    	btn.Click += new EventHandler(btn_clicked);
    	// this.Controls.Add(btn);
    	// this.Controls.Add(exitBtn);
    }  

    public void btn_clicked(Object o, EventArgs e){
    	MessageBox.Show("you type: " + tbox.Text);
    }

    public static void Main()  
    {  
        Application.Run(new Mainx());  
    }  
}  
/* 
To Compile make a batch File in Dos Mode as compile.bat 
csc /r:System.dll /r:System.Drawing.dll /r:System.WinForms.dll 
/r:Microsoft.Win32.InterOp.dll /out:MyForm1.exe MyForm1.cs 
*/  





