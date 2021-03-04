def leap_year(n):
    if n % 400 == 0:
        return True
    elif n % 100 == 0:
        return False
    elif n % 4 == 0:
        return True
    else:
        return False


month_31_days = ("january", "march", "may", "july", "august", "october", "december")
month_30_days = ("april", "june", "september", "november")
month = input("Please enter the month name : ").lower()
if month == "february":
    year = int(input("Please enter the year : "))
    if leap_year(year):
        print(f"No. of day in {month} is 29")
    else:
        print(f"No. of day in {month} is 28")
elif month in month_31_days:
    print(f"No. of day in {month} is 31")
elif month in month_30_days:
    print(f"No. of day in {month} is 30")
else:
    print("Wrong input")
