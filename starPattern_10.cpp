#include <bits/stdc++.h>
using namespace std;

void pattern10(int n)
{
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - i - 1; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    pattern10(5);
    return 0;
}