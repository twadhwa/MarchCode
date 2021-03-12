x = int(input("Enter 1st number : "))
y = int(input("Enter 2nd number : "))
while(y):
    x, y = y, x % y

print("The HCF  of the  the two number is ", x)
