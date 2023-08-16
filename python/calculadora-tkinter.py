import tkinter as tk


class Calculator:
    def __init__(self):
        self.gui = tk.Tk()
        self.gui.title('Simple Calculator')
        self.expression = ''
        
        self.equation = tk.StringVar()       
        self.screen = tk.Entry(self.gui, textvariable=self.equation)

        b1 = self.num('1')
        b2 = self.num('2')
        b3 = self.num('3')
        b4 = self.num('4')
        b5 = self.num('5')
        b6 = self.num('6')
        b7 = self.num('7')
        b8 = self.num('8')
        b9 = self.num('9')
        b0 = self.num('0')

        bma = self.num('+')
        bme = self.num('-')
        bmu = self.num('*')
        bdi = self.num('/')
        big = self.equal()
        bfl = self.num('.')
        bcl = self.clear()

        self.screen.grid(row=0, columnspan=4, ipadx=70, sticky='EW')

        b1.grid(row=1, column=0)
        b2.grid(row=1, column=1)
        b3.grid(row=1, column=2)
        b4.grid(row=2, column=0)
        b5.grid(row=2, column=1)
        b6.grid(row=2, column=2)
        b7.grid(row=3, column=0)
        b8.grid(row=3, column=1)
        b9.grid(row=3, column=2)
        b0.grid(row=4, column=0)

        bma.grid(row=1, column=3)
        bme.grid(row=2, column=3)
        bmu.grid(row=3, column=3)
        bdi.grid(row=4, column=3)
        big.grid(row=4, column=2)
        bfl.grid(row=4, column=1)
        bcl.grid(row=5, column=3)

        self.gui.mainloop()


    def press(self, txt):
       self.expression += txt
       self.equation.set(self.expression)


    def num(self, txt):
        return tk.Button(self.gui, text=txt, height=1, width=5, command=lambda: self.press(txt))


    def equal(self):
        def command():
            self.equation.set(str(eval(self.expression)))
            self.expression = ''

        return tk.Button(self.gui, text='=', height=1, width=5, command=lambda: command())


    def clear(self):
        def command():
            self.expression = ''
            self.equation.set('')
        return tk.Button(self.gui, text='Clear', height=1, width=5, command=lambda: command())


if __name__ == '__main__': 
    Calculator()
