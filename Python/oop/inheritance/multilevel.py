class A:
    def methodA(self):
        print("A")

class B(A):
    def methodB(self):
        print("B")

class C(B):
    def methodC(self):
        print("C")

obj = C()
obj.methodA()
obj.methodB()
obj.methodC()