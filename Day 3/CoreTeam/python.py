print("Enter Month Number : ")
n = int(input())

if n > 12:
    print("Enter a valid number.")
elif n == 4 or n == 6 or n == 9 or n == 11:
    print("This month has 30 days.")
elif n == 2:
    print("This month has 28 days or 29 days.")
else:
    print("This month has 30 days.")
