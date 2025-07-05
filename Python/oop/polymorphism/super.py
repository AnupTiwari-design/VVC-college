class Animal:
    def sound(self):
        print("Animal makes a sound")

class Dog(Animal):
    def sound(self):
        super().sound()       # Call parent version
        print("Dog barks")

d = Dog()
d.sound()