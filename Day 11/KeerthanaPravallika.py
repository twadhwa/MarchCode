def hcf(x, y):
   while(y):
       x, y = y, x % y
   return x

n1,n2 = [int(x) for x in input().split()]
res = hcf(n1, n2)
lcm = n1*n2/res;
print("The LCM is", lcm)
