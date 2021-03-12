# To find LCM of two numbers.

lcm=1
num1 = int(input()) 
num2 = int(input())
for i in range(2, num1*num2):
  if i%num1 == 0 and i%num2 == 0 :
    lcm=i
    break
print("> LCM of", num1,"and", num2, ":", lcm)

import math 
print ("> HCF using math.gcd() :", math.gcd(num1,num2))
print("> LCM calculated using (num1*num2)/hcf :", (num1*num2)/math.gcd(num1,num2))
