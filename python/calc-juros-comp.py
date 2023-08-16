import tkinter as tk

class Calc:
    def __init__(self):
        root = tk.Tk()
        root.title("Compound Interest Calculator")
        root.geometry("400x250") 

        self.l1 = tk.Label(root, text='Principle Amount (R$):', relief='groove')
        self.amount = tk.DoubleVar(value='')
        self.e1 = tk.Entry(root, textvariable=self.amount)

        self.l2 = tk.Label(root, text='Rate (%):', relief='groove')
        self.rate = tk.DoubleVar(value='')
        self.e2 = tk.Entry(root, textvariable=self.rate)

        self.l3 = tk.Label(root, text='Time (Years):', relief='groove')
        self.time = tk.IntVar(value='')
        self.e3 = tk.Entry(root, textvariable=self.time)

        self.b1 = tk.Button(root, text='Submit', command=self.calculate)

        self.l4 = tk.Label(root, text='Compound Interest:', relief='groove')
        self.result = tk.DoubleVar(value='')
        self.e4 = tk.Entry(root, textvariable=self.result)

        self.b2 = tk.Button(root, text='Clear', command=self.clear)

        self.l1.grid(row=0, column=0, sticky='we', padx=7, pady=7)
        self.e1.grid(row=0, column=1)
        
        self.l2.grid(row=1, column=0, sticky='we', padx=7, pady=7)
        self.e2.grid(row=1, column=1)
        
        self.l3.grid(row=2, column=0, sticky='we', padx=7, pady=7)
        self.e3.grid(row=2, column=1)
        
        self.b1.grid(row=3, column=1, sticky='we', pady=7)

        self.l4.grid(row=4, column=0, sticky='we', padx=7, pady=7)
        self.e4.grid(row=4, column=1)

        self.b2.grid(row=5, column=1, sticky='we', pady=15)

        root.mainloop()

    def calculate(self):
        _result = self.amount.get() * ((1 + self.rate.get() / 100) ** self.time.get())
        self.result.set(_result)
        
    def clear(self):
        self.amount.set('')
        self.rate.set('')
        self.time.set('') 
        self.result.set('')


if __name__ == '__main__':
    Calc()
