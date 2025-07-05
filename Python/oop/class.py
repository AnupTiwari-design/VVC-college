class Math:
    def add(self, a, b):
        return a + b

    def square(self, a, b):
        return a ** b
    
    def print(self):
        print('heloo')

ob = Math()
sum = ob.add(3, 4)
print(sum)  

print(ob.square(6, 7))  
ob.print()