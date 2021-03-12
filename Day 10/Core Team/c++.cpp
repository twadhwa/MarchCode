#include <iostream>
using namespace std;

int main()
{
    int i, n1, n2, j, hcf=1;

		cout<<"Input 1st number for HCF: ";
    cin>>n1;
    cout<<"Input 2nd number for HCF: ";
    cin>> n2;

    j = (n1<n2) ? n1 : n2;

    for(i=1; i<=j; i++){
			if(n1%i==0 && n2%i==0){
            hcf = i;
					}
    }
  	cout<<\nHCF of and is : ",
		n1, n2, hcf;
		return 0;
}
