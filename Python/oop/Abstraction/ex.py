from abc import ABC, abstractmethod

class Animal(ABC):  # Abstract class
    @abstractmethod
    def sound(self):
        pass  # Abstract method (no body)

class Dog(Animal):
    def sound(self):
        print("Dog barks")

class Cat(Animal):
    def sound(self):
        print("Cat meows")

# a = Animal()  # ❌ Error: Cannot instantiate abstract class
d = Dog()
d.sound()       # Output: Dog barks