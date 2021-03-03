#include <iostream>

using namespace std;

int main()
{
    int num;
    // User Input
    cout << "Enter the number: " << endl;
    cin >> num;

    // Condition
    if (num % 5 == 0 && num % 11 == 0)
    {
        cout << num << " is divisble by both 5 & 11" << endl;
    }
    else
    {
        cout << num << " is not divisble by 5 & 11 both" << endl;
    }

    return 0;
}