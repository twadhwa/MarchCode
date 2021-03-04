#Day 3
month = input().lower()
l1 = ['january','march','may','july','august','october','december']
l2 = ['april','june','september','november']
l3 = ['february']

if month in l1:
    print("31 days")
elif month in l2:
    print("30 days")
elif month in l3:
    print("28 or 29 days")
else:
    print("Please enter full name of the month!")
