#include <bits/stdc++.h>
using namespace std;

void pattern16(int n)
{
    char alphabet = 65;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << alphabet;
        }
        cout << endl;
        alphabet = alphabet + 1;
    }
}

int main()
{
    pattern16(5);
    return 0;
}