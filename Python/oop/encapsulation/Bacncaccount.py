class BankAccount:
    def __init__(self, account_number, balance):
        self.__account_number = account_number  # private
        self.__balance = balance                # private

    def deposit(self, amount):
        if amount > 0:
            self.__balance += amount
            print(f"Deposited ₹{amount}")
        else:
            print("Invalid deposit amount")

    def withdraw(self, amount):
        if amount <= self.__balance:
            self.__balance -= amount
            print(f"Withdrew ₹{amount}")
        else:
            print("❌ Insufficient funds")

    def get_balance(self):
        return self.__balance
acc = BankAccount("12345678", 1000)

acc.deposit(500)             # Deposited ₹500
acc.withdraw(200)            # Withdrew ₹200
print("Balance:", acc.get_balance())  # Balance: 1300

acc.withdraw(2000)           # ❌ Insufficient funds

# Direct access will fail:
# print(acc.__balance)       # ❌ AttributeError