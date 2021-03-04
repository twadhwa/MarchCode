#include<iostream>
using namespace std;

int main()
{
    int month;
    do
    {cout<<"enter any month number: ";
      cin>>month;
    } while( month >12 );

    if( ( month <=7 && month%2!=0 ) || (month>=8 && month%2==0 ) )
        cout<<"month "<<month<<" have 31 days";
    else
        if (month==2)
           cout<<"2nd month have 28 days";
        else
            cout<<"month "<<month<<" have 30 days";

    return 0;
}
