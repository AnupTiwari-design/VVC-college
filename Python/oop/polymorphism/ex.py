class Animal:
    def speak(self):
        print("Animal speaks")

class Dog(Animal):
    def speak(self):  # Overriding the parent method
        print("Dog barks")

a = Animal()
a.speak()    # Output: Animal speaks

d = Dog()
d.speak()    # Output: Dog barks