# To find HCF of two numbers.

hcf=1
num1 = int(input()) 
num2 = int(input())
for i in range( min(num1, num2), 0, -1):
  if num1%i == 0 and num2 % i == 0 :
    hcf=i
    break
print("> HCF of", num1,"and", num2, ":", hcf)

import math 
print ("> HCF using math.gcd() :", math.gcd(num1,num2))
