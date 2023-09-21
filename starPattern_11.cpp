#include <bits/stdc++.h>
using namespace std;

void pattern11(int n)
{
    int first = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            first = 1;
        else
            first = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << first << " ";
            first = 1 - first;
        }
        cout << endl;
    }
}

int main()
{
    pattern11(5);
    return 0;
}