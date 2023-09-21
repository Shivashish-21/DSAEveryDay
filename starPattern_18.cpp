#include <bits/stdc++.h>
using namespace std;

void pattern18(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char alphabet = 65;
        char x = alphabet + n - i;
        for (int j = 0; j < i; j++)
        {
            cout << char(x) << " ";
            x = x + 1;
        }
        cout << endl;
    }
}

int main()
{
    pattern18(5);
    return 0;
}