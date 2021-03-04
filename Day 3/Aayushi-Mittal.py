# Write a program to find out the total number of days in a given month.

month = input("Enter a month name (in lower case) : ")
if month == "january" or month == "march" or month == "may" or month == "july" or month == "august" or month == "october" or month == "december":
    print("\n> " + month + " has 31 days")
elif month == "april" or month == "june" or month == "september" or month == "november":
    print("\n> " + month + " has 30 days")
elif month == "february":
    print("\n> " + month + " has 28 or 29 days")
    year = int(input("Enter the current year: "))
    if year%400 == 0 or (year%100 != 0 and year%4 == 0):
        print(f"\n> {year} is a leap year. So, {month} has 29 days.")
    else:
        print(f"\n> {year} is not a leap year. So, {month} has 28 days.")
else:
    print("> " + month + " is invalid.")
