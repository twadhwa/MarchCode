print("Enter the number")
n = int(input())

if n % 5 == 0 and n % 11 == 0:
    print("{} is divisible by 5 and 11".format(n))
else:
    print("{} is not divisible by 5 and 11".format(n))
