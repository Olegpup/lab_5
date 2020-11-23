sum = 0
number = int(input("Enter your number: "))
while number > 9:
    while number != 0:
        add = number % 10
        sum += add
        number //= 10
    number = sum
    sum = 0
print("Digit root:", number)