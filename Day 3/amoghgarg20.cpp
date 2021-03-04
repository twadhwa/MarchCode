#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the month number(Eg.1 for January):";
    cin>>n;
    if(n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12){
        cout<<"Number of days in given month are 31"<<endl;
    }
    else if(n==2){
        cout<<"Is it a leap year(y(1)/n(0))?:";
        int m;
        cin>>m;
        if(m){
            cout<<"Number of days in given month are 29"<<endl;
        }
        else{
            cout<<"The number of days in given month are 28"<<endl;
        }
    }
    else if(n==4 || n==6 || n==9 || n==11){
        cout<<"Number of days in given month are 30"<<endl;
    }
    return 0;

}