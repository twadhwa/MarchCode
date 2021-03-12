# To find LCM of two numbers"

def gcd(a,b):
	if a == 0:
		return b
	return gcd(b % a, a)


def lcm(a,b):
	return (a / gcd(a,b))* b

a = int(input())
b = int(input())
print('LCM of', a, 'and', b, 'is', lcm(a, b))



