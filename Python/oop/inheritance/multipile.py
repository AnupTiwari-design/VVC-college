class A:
    def showA(self):
        print("A")

class B:
    def showB(self):
        print("B")

class C(A, B):  # Inherits from both
    def showC(self):
        print("C")

obj = C()
obj.showA()
obj.showB()
obj.showC()