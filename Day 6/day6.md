---		
Day 6 : Question Of The Day
Question : To print the sum of all the numbers and sum of all the even number between ( n and m )
---
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    int sum = 0, sumeven = 0;
    for (int i = n; i <= m; i++)
    {
        sum += i;

        if (i % 2 == 0)
            sumeven += i;
    }
    cout << sum << " " << sumeven << endl;
    return 0;
}
