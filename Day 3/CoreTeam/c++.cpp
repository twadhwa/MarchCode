#include "iostream"
using namespace std;

void printNumberOfDays(int N)
{
    if (N == 1 || N == 3 || N == 5
        || N == 7 || N == 8 || N == 10
        || N == 12) {
        cout << "31 Days.";
    }
    else if (N == 4 || N == 6
             || N == 9 || N == 11) {
        cout << "30 Days.";
    }
    else if (N == 2) {
        cout << "28/29 Days.";
    }
    else {
        cout << "Invalid Month.";
    }
}
int main()
{
    int N;
    cout << "Enter Month Number : ";
    cin >> N;
    printNumberOfDays(N);
    return 0;
}
