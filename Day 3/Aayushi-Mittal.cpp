// Write a program to find out the total number of days in a given month.

#include<iostream>
using namespace std;
int main()
{
  string month;
  cout<<"Enter a month name (in lower case) :";
  cin>>month;
  if(month == "january" || month == "march" || month == "may" || month == "july" || month == "august" || month == "october" || month == "december")
    cout<<"\n> "<<month<<" has 31 days"<<endl;
  else if(month == "april" || month == "june" || month == "september" || month == "november")
    cout<<"\n> "<<month<<" has 30 days"<<endl;
  else if(month == "february")
  {
    cout<<"\n> "<<month<<" has 28 or 29 days"<<endl;
    int year;
    cout<<"Enter the current year: ";
    cin>>year;
    // checking for leap year or not.
    (year%400 == 0 || (year%100 != 0 && year%4 == 0)) ? cout<<"\n> "<<year<<" is a leap year. So, "<<month<<" has 29 days." : cout<<"> "<<year<<" is not a leap year. So, "<<month<<" has 28 days.";
  }
  else
    cout<<"> "<<month<<" is invalid.";
}
