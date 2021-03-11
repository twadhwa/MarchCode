# To find sum of the first and last digit of a given number.

num = int(input())
last = num % 10
n = num
while n != 0 :
    first = n % 10;
    n /= 10
print("> Sum of first and last digit : ", first + last)
