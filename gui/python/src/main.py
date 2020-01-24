
# additional path to find .py files
import sys
sys.path.append('lib')



# gui

# import tkinter as tk
from tkinter import *
# import ttk as tk
import tkinter.ttk as tk
# from tkinter import *
# import tk.tkMessageBox as dialog
from tkinter import messagebox
m = Tk()
m.style = tk.Style()
#('clam', 'alt', 'default', 'classic')
m.style.theme_use("clam")

# body
m.title('Simple')

# textbox
inputx = tk.Entry(m)
inputx.pack()

# button
def myfunc():
	# m.title('clicked')
	m.title(inputx.get())
	messagebox.showinfo('my info', inputx.get())


btn = tk.Button(m, text='click me', width=25, command=myfunc)
btn.pack()

# m.pack()
m.mainloop()







