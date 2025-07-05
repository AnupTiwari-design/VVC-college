class Student:
    def __init__(self, name, age):
        self.__name = name   # private
        self.__age = age     # private

    def get_name(self):
        return self.__name

    def set_age(self, age):
        if age > 0:
            self.__age = age
        else:
            print("Invalid age")

    def get_age(self):
        return self.__age

s = Student("Anup", 22)
print(s.get_name())    # ✅ Access via getter
s.set_age(23)          # ✅ Set via setter
print(s.get_age())