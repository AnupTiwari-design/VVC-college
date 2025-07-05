class Person:

    # constructor 
    def __init__(self,name,age):
        self.name=name
        self.age=age
        
    def show(self):
        print(self.name)
        print(self.age)
        
p=Person('Anup',26)
p.show()