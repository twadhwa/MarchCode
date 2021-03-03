# Solution of MarchCode Day 2

n = int(input("Enter a number here: "))

if (n % 5 == 0 and n % 11 == 0):
    print("%d is divisible by both 5 and 11"%n)

elif (n % 5 == 0):
    print("%d is divisible by only 5"%n)

elif (n % 11 == 0):
    print("%d is divisible by only 11"%n)

else:
    print("%d is neither divisible by 5 nor 11"%n)

    
