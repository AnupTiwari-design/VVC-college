class Demo:
    def __init__(self):
        self._age = 22  # protected

class SubDemo(Demo):
    def show(self):
        print("Age:", self._age)

s = SubDemo()
s.show()
print(s._age) 