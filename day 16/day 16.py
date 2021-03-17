num = int(input("Enter the number to be check "))
sum = 0 
while (num>0):
    rem = num%10
    num = num//10
    fact = 1 
    for i in range (1 , rem+1 ):
        fact = fact*i
        
    sum = sum + fact
    
if (sum == num):
    print("The number is a strong number ")
else :
    print("The number is not a strong number ")
