number = int(input("Enter a number:")) 
i = 0

while number != 0:
	i += 1
	r = number % 10
	if i==1:
		first=r
	number = number // 10
	
last=r;
print("The sum of last and first digits is ",last+first)
	