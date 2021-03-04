# Solution of MarchCode Day 3

print("""Choose a number corresponding to the month
1. January
2. February
3. March
4. April
5. May
6. June
7. July
8. August
9. September
10. October
11. November
12. December""")

n =int(input("Enter the number here: \n"))

if (n == 1 or n == 3 or n == 5 or n == 7 or n == 8 or n == 10 or n == 12):
    print("31 days")
elif (n == 4 or n == 6 or n == 9 or n == 11):
    print("30 days")
elif (n == 2):
    print("28/29 days")
else:
    print("Please choose a number between 1 to 12")
