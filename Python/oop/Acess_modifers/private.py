class Demo:
    def __init__(self):
        self.__salary = 50000  #

    def get_salary(self):
        return self.__salary

d = Demo()
print(d.get_salary())     
#print(d.__salary)      